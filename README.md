Benefit of repeatable timing on time critical concurrent programs.

Abstract: The project aims to analyze the effect of repeatable timing on time critical concurrent programs. 
Repeatable timing ensures that the interleaving between programs is deterministic. 
Intuitively, if the interleaving is deterministic, then it is possible to ascertain the functions and variables which can be co-accessed. 
This helps in reducing the number of testcases required to detect the bug. The project looks at executing benchmarks with concurrent bugs
and analyzing the effect of repeatable timing on these bugs. Further, using the constructs provided by the instruction set architecture we
are able to fix some of these bugs. Another aspect of our project is evaluating an application under test(AUT) and detecting whether any 
concurrency bug exists. The project was performed on Flexpret, which is an open source softcore built on the riscv instruction set
architecture. The multiple reader single writer problem was evaluated on flexpret and were able to observe the bug in the first iteration 
while it took us around 200 iterations on an average to find the same ordering violation bug in the riscv system.
