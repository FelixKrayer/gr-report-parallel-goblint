# Parallelizing the Top-Down Solver for Faster Static Analysis
## Parallelisierung des top-down Solvers für schnellere statische Analyse
### Abstract
Abstract interpreters get slow for larger programs since solving large constraint systems through fix-point iteration is time-consuming. In this report, we aim to accelerate the static analysis of programs by parallelizing a top-down fix-point algorithm.

We implemented three different approaches of parallel solvers in the \gob\ static analyzer. The first solver spawns multiple threads at the beginning that independently search for variables to iterate. The other two rely on a modification of the constraint system that explicitly indicates which parts can likely be solved in parallel. These two solvers differ in how they share data: one solver uses a shared data structure, while the other one employs local data structures for each thread that are merged in the end.

Benchmarks of the three solvers compared to a baseline show, that the speedup depends on the analyzed program. This is due to how we modified the constraint system to give parallelization hints. Overall we achieved a satisfying speedup for certain programs, where parallelization hints were well-placed, with the best-performing solver reaching a speedup of around 2.0 when using two worker threads for a number of programs. Additionally, another solver provided a slight speedup for two other programs. We were not able to find a correlation between the size of the analyzed program and the speedup achieved.

Our work provides a foundation for further research in this area, focusing on improving the parallelization hints or developing strategies to select a solver based on the program to be analyzed.

[full report](https://github.com/FelixKrayer/gr-report-parallel-goblint/blob/main/Report_2024_10_27.pdf)
