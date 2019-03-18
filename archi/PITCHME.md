### Accelerator Design with OpenCL
##### (Athens Week 18-22 March, 2018) 
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
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/ddr_bank.svg" height="400"/>
---
### DRAM Operation: Banks 
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/ddr.svg" height="400"/>
---
### DRAM Operation: DRAM Operation
* READ: Activate (open the row)-> Read -> Precharge (close).
* WRITE: Activate (open the row)-> Write -> Precharge (close).
* REFRESH: READ-> WRITE back.
---
### DRAM Traffic TCL,TRCD,TRP
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/dram.svg" height="400"/>
---

### DRAM Traffic
* DRAM is the main performance bottleneck in a SoC.
* DRAM response can come out of order, has high initial latency.
---
### RECAP: Cache
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/opencl.svg" height="400"/>
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

<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/cache.svg" height="400"/>
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
#HSLIDE?image=http://perso.telecom-paristech.fr/~chaudhur/tpt39/mmu.svg&size=auto 90%
<!-- .slide: data-background-transition="none" -->
#HSLIDE?image=http://perso.telecom-paristech.fr/~chaudhur/tpt39/mmu1.svg&size=auto 90%
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
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/vm_path.svg" height="400"/>
---

### Recap : Memory Hierarchy
+++?image=http://perso.telecom-paristech.fr/~chaudhur/tpt39/memory_hier.svg&size=auto 90%
+++?image=http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/memhier_mobile.svg&size=auto 90%
+++?image=http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/memhier_laptop.svg&size=auto 90%
+++?image=http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/memhier_desktop.svg&size=auto 90%
+++?image=http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/memhier_server.svg&size=auto 90%
---
### Recap: Processors 
+++?image=http://perso.telecom-paristech.fr/~chaudhur/tpt39/simd.svg&size=auto 90%
+++?image=http://perso.telecom-paristech.fr/~chaudhur/tpt39/simd1.svg&size=auto 90%
+++?image=http://perso.telecom-paristech.fr/~chaudhur/tpt39/simd2.svg&size=auto 90%
+++?image=http://perso.telecom-paristech.fr/~chaudhur/tpt39/simd3.svg&size=auto 90%
---
### Uniprocessor
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/uniprocessor.svg" height="400"/>
---
### Multiprocessor
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/gpu_mimd.svg" height="400"/>
---
### Multiprocessor: UMA
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/uma.svg" height="400"/>
---
### Multiprocessor: NUMA
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/numa.svg" height="400"/>
---
### Processor: VLIW
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/vliw.svg" height="400"/>
---
### Multi-Threading: Superscalar
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/superscalar.svg" height="400"/>
---
### Multi-Threading: Coarse-Grained
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/coarse_mt.svg" height="400"/>
---
### Multi-Threading: Fine-Grained
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/fine_mt.svg" height="400"/>
---
### Multi-Threading: Simultaneous
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/smt.svg" height="400"/>
---
### Reacp: Multi-Threading
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/mt.svg" height="400"/>
---

### GPU Architecture : Uniprocessor
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/uniprocessor.svg" height="400"/>
---
### GPU Architecture : SIMD
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/gpu_simd1.svg" height="400"/>
---
### GPU Architecture : SIMD
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/gpu_simd2.svg" height="400"/>
---
### GPU Architecture : SIMD
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/gpu_simd3.svg" height="400"/>
---

### Example Heterogeneous SoCs
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/acecontext.svg" height="400"/>
---
### Our SoC: Exynos 5422
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/exynos5422.svg" height="400"/>
---

#### quiz

* What is maximum computation rate in Flops/S. ?
