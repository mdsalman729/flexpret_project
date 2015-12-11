PROG ?=\
radbench_bug_0 \
radbench_bug_1 \
radbench_bug_2 \
radbench_bug_3 \
radbench_bug_4 \
radbench_bug_5 \
radbench_bug_6 \
dining_philosopher


#FLEX
#SCHEDULE?=0xFFEE0210
#TMODES?=0x000000A0

# 4R-RR
SCHEDULE?=0xFFFF3210
TMODES?=0x00000000

# 4T-VAR
#SCHEDULE?=0xFFFFFFFE
#TMODES?=0x000000AA



C_STARTUP = startup
#RISCV_S_OPTS +=
RISCV_C_OPTS += -DDEBUG_EMULATOR

$(DEFAULT_RULES)

