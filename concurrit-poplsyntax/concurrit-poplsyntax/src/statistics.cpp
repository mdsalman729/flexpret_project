/**
 * Copyright (c) 2010-2011,
 * Tayfun Elmas    <elmas@cs.berkeley.edu>
 * All rights reserved.
 * <p/>
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 * <p/>
 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 * <p/>
 * 2. Redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution.
 * <p/>
 * 3. The names of the contributors may not be used to endorse or promote
 * products derived from this software without specific prior written
 * permission.
 * <p/>
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER
 * OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "concurrit.h"

namespace concurrit {

/********************************************************************************/

Timer::Timer(std::string name) {
	this->name = name;
	reset();
}

/********************************************************************************/
void Timer::reset() {
	startTime.tv_sec = startTime.tv_usec = 0;
	endTime = startTime;
	elapsedTime = startTime;

	started = false;
	stopped = false;

	elapsedTimeInHours = -1;
	elapsedTimeInMinutes = -1;
	elapsedTimeInSeconds = -1;
	elapsedTimeInMilliSec = -1;
	elapsedTimeInMicroSec = -1;
}

/********************************************************************************/

Timer::~Timer() {
}

/********************************************************************************/

void Timer::gettimeofday_(timeval* t) {
	if (gettimeofday(t, NULL)) {
		safe_fail("Failed to get the end time!");
	}
}

/********************************************************************************/

void Timer::start() {
	if(started) {
		safe_assert(!stopped);
		reset();
	}
	safe_assert(!stopped);
	started = true;
	gettimeofday_(&startTime);
	endTime = startTime;
}

/********************************************************************************/

void Timer::stop() {
	safe_assert(started && !stopped);
	stopped = true;
	recordElapsedTime();
}

/********************************************************************************/

void Timer::recordElapsedTime() {
	safe_assert(started);
	gettimeofday_(&endTime);
	bool is_positive = (timeval_subtract_(&elapsedTime, &endTime, &startTime) == 0);
	safe_assert(is_positive);
}

/********************************************************************************/

double Timer::getElapsedTimeInMicroSec() {
	safe_assert(started);
	if(!stopped || elapsedTimeInMicroSec < 0.0f) {
		timeval diff = getElapsedTime();
		elapsedTimeInMicroSec = (diff.tv_sec * (1000000.0f)) + diff.tv_usec;
		safe_assert(elapsedTimeInMicroSec >= 0.0f);
	}
	return elapsedTimeInMicroSec;
}

/********************************************************************************/

double Timer::getElapsedTimeInMilliSec() {
	safe_assert(started);
	if(!stopped || elapsedTimeInMilliSec < 0.0f) {
		elapsedTimeInMilliSec = this->getElapsedTimeInMicroSec() * (0.001f);
		safe_assert(elapsedTimeInMilliSec >= 0.0f);
	}
	return elapsedTimeInMilliSec;
}

/********************************************************************************/

double Timer::getElapsedTimeInSec() {
	safe_assert(started);
	if(!stopped || elapsedTimeInSeconds < 0.0f) {
		elapsedTimeInSeconds = this->getElapsedTimeInMicroSec() * (0.000001f);
		safe_assert(elapsedTimeInSeconds >= 0.0f);
	}
	return elapsedTimeInSeconds;
}

/********************************************************************************/

double Timer::getElapsedTimeInMin() {
	safe_assert(started);
	if(!stopped || elapsedTimeInMinutes < 0.0f) {
		elapsedTimeInMinutes = this->getElapsedTimeInSec() * (0.0166666667f);
		safe_assert(elapsedTimeInMinutes >= 0.0f);
	}
	return elapsedTimeInMinutes;
}

/********************************************************************************/

double Timer::getElapsedTimeInHours() {
	safe_assert(started);
	if(!stopped || elapsedTimeInHours < 0.0f) {
		elapsedTimeInHours = this->getElapsedTimeInMin() * (0.0166666667f);
		safe_assert(elapsedTimeInHours >= 0.0f);
	}
	return elapsedTimeInHours;
}

/********************************************************************************/

double Timer::getElapsedTimeInDays() {
	safe_assert(started);
	return this->getElapsedTimeInHours() * (0.0416666667f);
}

/********************************************************************************/

timeval Timer::getElapsedTime() {
	safe_assert(started);
	if (!stopped) {
		recordElapsedTime();
	}
	return elapsedTime;
}

/********************************************************************************/

std::string Timer::StartTimeToString() {
	safe_assert(started);
	return timeval_to_string_(&startTime);
}

std::string Timer::EndTimeToString() {
	safe_assert(started && stopped);
	return timeval_to_string_(&endTime);
}

/********************************************************************************/

std::string Timer::ElapsedTimeToString() {
	safe_assert(started);
	long int h = (long int)getElapsedTimeInHours();
	long int m = (long int)getElapsedTimeInMin() - (h * 60);
	long int s = (long int)getElapsedTimeInSec() - (m * 60);
	long int ml = (long int)getElapsedTimeInMilliSec() - (s * 1000);
	long int mc = (long int)getElapsedTimeInMicroSec() - (ml * 1000);
	return format_string("%lu Hour | %lu Min | %lu Sec | %lu MlSec | %lu McSec",
						  h, m, s, ml, mc);
}

/********************************************************************************/

std::string Timer::ToString() {
	return format_string("%s:\n"
						 "  Started: %s\n"
						 "  Ended: %s\n"
						 "  Elapsed: %s\n"
						 "  Total in MilliSecs: %lu\n"
						 "  Total in MicroSecs: %lu\n",
						 name.c_str(),
						 StartTimeToString().c_str(),
						 EndTimeToString().c_str(),
						 ElapsedTimeToString().c_str(),
						 (long int)getElapsedTimeInMilliSec(),
						 (long int)getElapsedTimeInMicroSec());
}

/********************************************************************************/

// this is from GNU C library manual
/* Subtract the `struct timeval' values X and Y,
 storing the result in RESULT.
 Return 1 if the difference is negative, otherwise 0.  */

int Timer::timeval_subtract_(struct timeval *result, struct timeval *_x,
		struct timeval *_y) {
	struct timeval x = *_x;
	struct timeval y = *_y;
	/* Perform the carry for the later subtraction by updating y. */
	if (x.tv_usec < y.tv_usec) {
		int nsec = (y.tv_usec - x.tv_usec) / 1000000 + 1;
		y.tv_usec -= 1000000 * nsec;
		y.tv_sec += nsec;
	}
	if (x.tv_usec - y.tv_usec > 1000000) {
		int nsec = (y.tv_usec - x.tv_usec) / 1000000;
		y.tv_usec += 1000000 * nsec;
		y.tv_sec -= nsec;
	}

	/* Compute the time remaining to wait.
	 tv_usec is certainly positive. */
	result->tv_sec = x.tv_sec - y.tv_sec;
	result->tv_usec = x.tv_usec - y.tv_usec;

	/* Return 1 if result is negative. */
	return x.tv_sec < y.tv_sec;
}

/********************************************************************************/

std::string Timer::timeval_to_string_(timeval* tv) {
	time_t nowtime;
	struct tm *nowtm;
	char tmbuf[64], buf[64];

	nowtime = tv->tv_sec;
	nowtm = localtime(&nowtime);
	strftime(tmbuf, sizeof(tmbuf), "%Y-%m-%d %H:%M:%S", nowtm);
	snprintf(buf, sizeof(buf), "%s.%06d", tmbuf, (int) tv->tv_usec);

	return std::string(buf);
}

/********************************************************************************/

//#include <proc/readproc.h>

unsigned long Statistics::GetMemoryUsageInKB() {
//	struct proc_t usage;
//	look_up_our_self(&usage);
//	return usage.vm_data / 1024UL;

	unsigned long mem = 0;

	FILE* fin = my_fopen("/proc/self/status", "r");

	const size_t buff_sz = 64;
	if(fin != NULL) {
		char buff[buff_sz];
		while(!feof(fin)) {
			if(fgets(buff, buff_sz, fin) == NULL) {
				break;
			} else {
				size_t sz = strnlen(buff, buff_sz);
				if(sz > 0) {
					if(buff[sz-1] == '\n') {
						buff[sz-1] = '\0';
						--sz;
						if(sz == 0) continue;
					}

					if(strncmp(buff, "VmData:", 7) == 0) {
						sscanf(buff+7, "%9lu", &mem);
						break;
					}
				}
			}
		}
		safe_assert(mem > 0);
		my_fclose(fin);
	}
	return mem;
}

/********************************************************************************/

void Counter::increment(unsigned long k /*= 1*/) {
	value_ += k;
}

void Counter::reset(std::string name /*= ""*/) {
	if(name != "") {
		name_ = name;
	}
	value_ = 0;
}

std::string Counter::ToString() {
	return format_string("%s: %lu", name_.c_str(), value_);
}

Counter::operator unsigned long () {
	return value_;
}

/********************************************************************************/

// override
void AvgCounter::increment(unsigned long k /*= 1*/) {
	Counter::increment(k);
	if(k > max_) max_ = k;
	if(k < min_) min_ = k;
	++count_;
}

// override
void AvgCounter::reset(std::string name /*= ""*/) {
	Counter::reset(name);
	count_ = 0;
	min_ = ULONG_MAX;
	max_ = 0L;
}

// override
std::string AvgCounter::ToString() {
	safe_assert(count_ > 0);
	return format_string("%s: Num: %lu | Total: %lu | Avg: %lu | Min: %lu | Max: %lu", name_.c_str(), count_, value_, (value_/count_), min_, max_);
}

AvgCounter::operator unsigned long () {
	return (value_/count_);
}

/********************************************************************************/

void Statistics::Reset() {
	timers_.clear();
	counters_.clear();
	avgcounters_.clear();
}

std::string Statistics::ToString() {
	std::stringstream s;

	s << "************* Statistics *************\n";

	for(TimerMap::iterator itr = timers_.begin(); itr != timers_.end(); ++itr) {
		Timer& timer = itr->second;
		s << timer.ToString() << std::endl;
	}

	for(CounterMap::iterator itr = counters_.begin(); itr != counters_.end(); ++itr) {
		Counter& counter = itr->second;
		s << counter.ToString() << std::endl;
	}

	for(AvgCounterMap::iterator itr = avgcounters_.begin(); itr != avgcounters_.end(); ++itr) {
		AvgCounter& avgcounter = itr->second;
		s << avgcounter.ToString() << std::endl;
	}

	return s.str();
}

Timer& Statistics::timer(const std::string& name) {
	TimerMap::iterator itr = timers_.find(name);
	if(itr == timers_.end()) {
		timers_[name] = Timer(name);
	}
	return timers_[name];
}

Counter& Statistics::counter(const std::string& name) {
	CounterMap::iterator itr = counters_.find(name);
	if(itr == counters_.end()) {
		counters_[name] = Counter(name);
	}
	return counters_[name];
}

AvgCounter& Statistics::avg_counter(const std::string& name) {
	AvgCounterMap::iterator itr = avgcounters_.find(name);
	if(itr == avgcounters_.end()) {
		avgcounters_[name] = AvgCounter(name);
	}
	return avgcounters_[name];
}

/********************************************************************************/

} // end namespace
