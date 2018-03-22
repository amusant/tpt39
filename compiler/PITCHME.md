### Accelerator Design with OpenCL
##### (Athens Week 19-24 March, 2018) 
---
### Parallelizing codes: Techniques

---
### Loops: Sequential
+++?image=assets/fig/para_seq.svg&size=auto 90%
---
### Loops: Intra Task Parallelism
+++?image=assets/fig/para_intra.svg&size=auto 90%
---
### Loops: Inter Task Parallelism
+++?image=assets/fig/para_inter.svg&size=auto 90%
---
### Loops: Intra & Inter Task Parallelism
+++?image=assets/fig/para_inter_intra.svg&size=auto 90%
---
### Loops: Inter Iteration Parallelism
+++?image=assets/fig/para_inter_iter.svg&size=auto 90%
---
### Loops: Inter Instruction Parallelism
+++?image=assets/para_inter_instr.svg&size=auto 90%
---

### Parallelizing Codes: Libraries
- Distributed Shared Memory (NUMA) & Clusters
	- MPI
- Shared memory multiprocessors
	-OpenMP
- Heterogeneous Multi-Processors
	-OpenCL
---
### Synchronization: OpenCL events
- CL_EVENT
	- 	CL_QUEUED
	-	CL_SUBMITED
	-	CL_RUNNING
	-	CL_COMPLETE
	- 	ERROR_CODE

- Useful Functions:
	- clWaitForEvents
---
### Synchronization: OpenCL Barriers
-	Command Barrier
	-	cl_int clEnqueueBarrier (	cl_command_queue command_queue)
	-	all queued commands in command_queue before barrier must finish
		before starting the commands after barrier.

	

