### Accelerator Design with OpenCL
##### (Athens Week 18-22 March, 2019) 

---
### Performance:Roofline
- Arithmetic Intensity I = Flops/Bytes
- Peak Bandwidth B = Bytes/S
- Peak Performance pi in Flops/S
- Perf =min( pi, B x I)
---
### Roofline 1 core
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/roofline0.svg" height="400"/>
---
### Roofline 4 core
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/roofline1.svg" height="400"/>
---
### Roofline All cores
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/roofline2.svg" height="400"/>
---
### Roofline GPU
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/roofline3.svg" height="400"/>
---
### Roofline 70% DDR Efficiency
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/roofline_70.svg" height="400"/>

---
### Roofline Matrix Multiplication
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/roofline_mm.svg" height="400"/>
---
### Matrix Multiplication Tiling
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/tiling.svg" height="400"/>
---
### GPU and OpenCL Programming Model
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/gpu_refined_multi.svg" width="400"/> 
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/work_items.svg" height="400"/>

---
### Parallelizing codes: Techniques

---
### Loops: Sequential
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/para_seq.svg" height="400"/>
---
### Loops: Intra Task Parallelism
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/para_intra.svg" height="400"/>
---
### Loops: Inter Task Parallelism
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/para_inter.svg" height="400"/>
---
### Loops: Intra & Inter Task Parallelism
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/para_inter_intra.svg" height="400"/>
---
### Loops: Inter Iteration Parallelism
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/para_inter_iter.svg" height="400"/>
---
### Loops: Inter Instruction Parallelism
- Taken care of by Compilers
---

### Parallelizing Codes: Libraries
- Distributed Shared Memory (NUMA) & Clusters
	- MPI
- Shared memory multiprocessors
	- OpenMP
- Heterogeneous Multi-Processors
	- OpenCL
- Can be used in combination
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
### Synchronization: OpenCL Command Barriers
-	Command Barrier
	-	cl_int clEnqueueBarrier (	cl_command_queue command_queue)
	-	all queued commands in command_queue before barrier must finish
		before starting the commands after barrier.

	

