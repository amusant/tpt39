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
* Suppose that we want to enhance the processor used for web serving. The new processor is 10 times faster on computation in the web serving application than the old processor. Assuming that the original processor is busy with computation 40% of the time and is waiting for I/0 60% of the time, what's the overall sppedup gained by incorporating enhancement?
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
### DRAM Operation: A single DRAM Bank
+++?image=assets/fig/ddr_bank.svg&size=auto 90%
---
### DRAM Operation: Banks 
+++?image=assets/fig/ddr.svg&size=auto 70%
---
### DRAM Operation: DRAM Operation
* READ: Activate (open the row)-> Read -> Precharge (close).
* WRITE: Activate (open the row)-> Write -> Precharge (close).
* REFRESH: READ-> WRITE back.
---
### DRAM Traffic TCL,TRCD,TRP
+++?image=assets/fig/dram.svg&size=auto 90%
---

### DRAM Traffic
* DRAM is the main performance bottleneck in a SoC.
* DRAM response can come out of order, has high initial latency.
---
### RECAP: Cache
+++?image=assets/fig/opencl.svg&size=auto 90%
---

### RECAP: Cache: Cache Terminology
* Memory contains up-to-date data, and cache has a copy  (cache line): CLEAN
* Cache has up-to-date data, and it must be written back to memory: DIRTY
* Memory contains up-to-date data, and cache does not : INVALID
* Memory does not have up-to-date data, cache does not : INVALID
---

### RECAP Cache Terminology

* HIT: Data found in Cache.
* MISS: Data is not in the cache.
* EVICT: A clean cache line is replaced due to a new allocation.

---

### RECAP  Cache Organization (4 Way)

+++?image=assets/fig/cache.svg&size=auto 90%
---
### RECAP  Cache Policies

* Allocation 
  * Write Allocate : On a Write miss replace the cache line.
  * Read Allocate : On a read miss replace the cache line.
---
### RECAP  Cache Policies
* Update
  * Write Through : A write updates both the cache and the main  memory.
  * Write Back: Write updates the cache only (marked as dirty). Main memory is updated, when the line is evicted, cache is flushed.

---

### RECAP: Cache Coherence
* Case 1. Memory update by another master. Cached copy is out of date.
* Case 2. For write back cache, when master writes to cache, main memory is out of date.
---
### RECAP: Cache Coherence
* Cache Coherency Protocols
	* MEI (Modified, Exclusive, Invalid)
	* MESI (Modified, Exclusive, Shared Invalid)
	* MOESI (Modified, Owned, Exclusive, Shared Invalid)
* Goals
	* Cache to Cache copy of clean data.
	* Cache to Cache move of Dirty data without accessing external memory.

---
### Recap : MMU
#HSLIDE?image=assets/mmu.svg&size=auto 90%
<!-- .slide: data-background-transition="none" -->
#HSLIDE?image=assets/mmu1.svg&size=auto 90%
---

### Recap: MMu Operation
* Translation Lookaside Buffer
	* Keeps a page table for virtual to physical address translation.
	* 4GB memory with page size of 4K => ~4MB
	* Each process has a different page table.
	* page table is kept in main memory.
    * Each access will need two accesses to main memory.
    * TLB acts as a cache for page table entries (PTE).
---
### Recap : Life of a Memory Request
---?image=assets/vm_path.svg&size=auto 90%
---

### Recap : Memory Hierarchy
+++?image=assets/memory_hier.svg&size=auto 90%
+++?image=assets/fig/memhier_mobile.svg&size=auto 90%
+++?image=assets/fig/memhier_laptop.svg&size=auto 90%
+++?image=assets/fig/memhier_desktop.svg&size=auto 90%
+++?image=assets/fig/memhier_server.svg&size=auto 90%
---
### Recap: Processors 
+++?image=assets/simd.svg&size=auto 90%
+++?image=assets/simd1.svg&size=auto 90%
+++?image=assets/simd2.svg&size=auto 90%
+++?image=assets/simd3.svg&size=auto 90%
---
### Uniprocessor
+++?image=assets/fig/uniprocessor.svg&size=auto 90%
---
### Multiprocessor
+++?image=assets/fig/gpu_mimd.svg&size=auto 90%
---
### Multiprocessor: UMA
+++?image=assets/fig/uma.svg&size=auto 90%
---
### Multiprocessor: NUMA
+++?image=assets/fig/numa.svg&size=auto 70%
---
### Processor: VLIW
+++?image=assets/fig/vliw.svg&size=auto 90%
---
### Multi-Threading: Superscalar
+++?image=assets/fig/superscalar.svg&size=auto 90%
---
### Multi-Threading: Coarse-Grained
+++?image=assets/fig/coarse_mt.svg&size=auto 90%
---
### Multi-Threading: Fine-Grained
+++?image=assets/fig/fine_mt.svg&size=auto 90%
---
### Multi-Threading: Simultaneous
+++?image=assets/fig/smt.svg&size=auto 90%
---
### Reacp: Multi-Threading
+++?image=assets/fig/mt.svg&size=auto 1%
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

