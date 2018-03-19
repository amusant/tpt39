### Accelerator Design with OpenCL
##### (Athens Week 19-24 March, 2018) 
---
### Parallelism

- Task Parallelism |
- Data Parallelism |
- Pipeline |

Note:
Task example car assembly
Data Example Graphic render
pipeline: car assembly.
---
### Task Parallelism

* A process in broken into different tasks.
* If the tasks are independent they can be run on parallel.
* e.g Car Assembly
Note:
draw it on board
---
### Data Parallelism

* Diffrent parts of data can be processed in parallel.
* e.g vector addition

Note:
draw it on board
---
#### quiz
- Get the average value of a vector |

Is it a data parallel application ?
---
### Pipeline

* Parallelism in time.
* each stage is dependent on the previous one.
* e.g Car Assembly, Video Pipeline
Note:
draw it on board
---
#### quiz

* What could be the disadvantages of pipeline ?

---
#### quiz

* How to calculate the performance of a pipeline ?

---
### Parallelism: Amdahl's Law
`$$speedup= \frac{1}{S+\frac{P}{N}}$$` 
* S:Fraction of the application that is serial.
* P:Fraction of the application that is parallelizable. 
* N Processor Speedup.
---
#### quiz
* Suppose that we want to enhance teh processor used for web serving. The new processor is 10 times faster on computation in the web serving application than the old processor. Assuming that the original processor is busy with computation 40% of the time and is waiting for I/0 60% of the time, what's the overall sppedup gained by incorporating enhancement?
---
### Recap: Computer Architecture

- Processor |
- MMU |
- Cache |
- Main Memory (DDR) |
---
### Recap: Computer Architecture

- Main Memory (DDR) 
- Cache 
- MMU 
- Processor 
---

+++?image=assets/simd.svg&size=auto 90%
+++?image=assets/simd1.svg&size=auto 90%
+++?image=assets/simd2.svg&size=auto 90%
+++?image=assets/simd3.svg&size=auto 90%
---
### Example Heterogeneous SoCs
+++?image=assets/acecontext.svg&size=auto 90%
---
### Example Heterogeneous SoCs
---
### Example Heterogeneous SoCs
---
### Example Heterogeneous SoCs
---
### Recap : Memory Hierarchy
+++?image=assets/memory_hier.svg&size=auto 90%
---
### Recap : Memory Hierarchy
#HSLIDE?image=assets/mmu.svg
<!-- .slide: data-background-transition="none" -->
#HSLIDE?image=assets/mmu1.svg
---
### Recap : Memory Hierarchy
---?image=assets/vm_path.svg
---
### Recap : Memory Hierarchy

- Memory contains up-to-date data, and cache has a copy (cache line) : CLEAN |
- Cache has up-to-date data, and it must be written back to memory : DIRTY |
- Memory contains up-to-date data, and cache does not : INVALID |
- Memory does not have up-to-date data, cache does not : INVALID |
- INVALID implies a cache miss. |

---
### Recap : Memory Hierarchy
---
### Parallelism
---
### Parallelism: Task Level
---
### Parallelism: Thread Level
---
### Parallelism: Data Level
---
### Parallelism: Pipeline
---
### GPU Architecture
---
### Domain Specific Architecture

