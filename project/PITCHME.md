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
### What do we know so far ?
- We saw the GPU architecture evolve to a Multi-Threaded SIMD Mulitprocessor. |
- We saw n SoC archietcture with and some deatils about Mali T628. |
- We know how to launch a OpenCL kernel
	- Platfrom-> Device-> Context-> Command Queue -> compile kernel
	- Create Buffers-> Pass Buffers to GPU 
	- Launch Kernel-> readback result buffers
---
### What do we know so far ?
- We know how to express parallelism using:
	- get_global_id() |
- We know how to express dependence using:
	- get_local_id(), get_group_id() |
- We learned about synchronization functions:
	- fence, barrier |
- We saw the use of Mali Graphics Degugger |


### LAB WORK 1
- Vector addition with size N 
- Calculate speedup with varying N.
- Measure Flops/s.
- Calculate the average of a vector.
- Calculate the average of a vector using workgroups.
- Measure speedup.
---
### LAB WORK 2
- Write a Matrix multiplication routing with two matrices of size M x K, K x N.
- where M=K=N
- measure speed up
- use streamline to see various statistics about Cache/TLB miss.
- Measure Flops/S.
---
### Debugger: MGD
* in a405-xx.enst.fr (desktop) clone the git depot.
* source init.sh > /dev/null
* module load mali/4.4
* mgd

	* in odroid
	* source init_odroid.sh
	* mgddaemon
	* make debug
---
### Performance Monitor: Streamline
* run start_gator.sh in tpt39/
	* cd tpt39; ./start_gator.sh&
* in a405-XX.enst.fr
	* $ source init.sh
	* $ module load mali/4.4
	* $ streamline
---
### Domain Specific Architecture

