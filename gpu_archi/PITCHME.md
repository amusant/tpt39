### Accelerator Design with OpenCL
##### (Athens Week 19-24 March, 2018) 
---
### What do we know so far ?
- There are three types of parallelism |
	- Task Parallelism |
	- Data Parallelism |
	- Pipeline |
- We saw the reasons for memory stalls and latency. |

- The techniques to hide latency through Caching. |

- The Virtual Memory. |
---
### What do we know so far ?
- We saw the evolution of processors from |
	- Uniprocessor to ... |
	- Multicores with Simultaneous Multi-Threading. |

- And we said hello to the world from our GPU (Mali-T628). |
---
### GPU Architecture : Uniprocessor
+++?image=assets/fig/uniprocessor.svg&size=auto 90%
---
### GPU Architecture : Evolution

- GPUs took a completely different path of evolution. |
- Because they live in a embarrasingly data-parallel environment. |
- The memory stalls/latency problems are still there. |
- So are the solutions to hide them. |
---
### GPU Architecture : MIMD
+++?image=assets/fig/gpu_mimd.svg&size=auto 90%
--- 
GPU Architecture : Evolution
* MIMD, but wait, we don't need the mutliple-instruction streams. |
* let' get rid of them. |
---
### GPU Architecture : SIMD
+++?image=assets/fig/gpu_simd1.svg&size=auto 90%
---
### GPU Architecture : More SIMD
+++?image=assets/fig/gpu_simd2.svg&size=auto 90%
---
### GPU Architecture : More SIMD
- Let's not forget our old friend Multi-Threading.
- Which helped us manage latency.
---
### GPU Architecture : SIMD with multi-threading.
+++?image=assets/fig/gpu_simd3.svg&size=auto 90% &title=caca
---

### Example Heterogeneous SoCs
+++?image=assets/acecontext.svg&size=auto 90%
---
### Domain Specific Architecture

