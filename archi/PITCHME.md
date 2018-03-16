### Accelerator Design with OpenCL
##### (Athens Week 19-24 March, 2018) 
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
- Memory contains up-to-date data, and cache has a copy
(cache line) : CLEAN
- Cache has up-to-date data, and it must be written back to
memory : DIRTY |
- Memory contains up-to-date data, and cache does not :
INVALID |
- Memory does not have up-to-date data, cache does not :
INVALID |
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
### Parallelism: Amdahl's Law
`$$speedup= \frac{1}{S+\frac{P}{N}}$$` 
* S:Fraction of the application that is serial.
* P:Fraction of the application that is parallelizable. 
* N Processor Speedup.
---
### GPU Architecture
---
### Domain Specific Architecture

