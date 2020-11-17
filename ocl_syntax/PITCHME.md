### Accelerator Design with OpenCL
##### (Athens Week 16-20 Nov, 2020) 

---
### OpenCL Programming Model
![width=1200, border=10px solid black](assets/oclflow.svg)
---
[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/hello_world.c)
[drag=30 10, drop=topright, font=bubblegum]
@[7-11](The OpenCL kernel.)
@[37](Get Platform Ids.)
---


[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/clGetPlatformIDs.c)
---

[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/hello_world.c)
[drag=30 10, drop=topright, font=bubblegum]
@[38-46](Get Platform Info.)
---
[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/clGetPlatformInfo.c)
---
[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/hello_world.c)
[drag=30 10, drop=topright, font=bubblegum]
@[49](Get Device Ids)
---
[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/clGetDeviceIDs.c)
---
[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/hello_world.c)
[drag=30 10, drop=topright, font=bubblegum]
@[50](Create Context)
---
[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/clCreateContext.c)
---

[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/hello_world.c)
[drag=30 10, drop=topright, font=bubblegum]
@[52](Create Command Queues)
---
[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/clCreateCommandQueue.c)
---

[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/hello_world.c)
[drag=30 10, drop=topright, font=bubblegum]
@[53](Create Program from Source)
@[7-11](The OpenCL kernel source code pointed to by *opencl*.)
---
[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/clCreateProgramWithSource.c)
---
[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/hello_world.c)
[drag=30 10, drop=topright, font=bubblegum]
@[60](Build Program)
---
[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/clBuildProgram.c)
---
[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/hello_world.c)
[drag=30 10, drop=topright, font=bubblegum]
@[61](Create Kernel!! Finally gettiing down to buisness)
---
[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/clCreateKernel.c)
---
[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/hello_world.c)
[drag=30 10, drop=topright, font=bubblegum]
@[62](Enqueue the Kernel in the queue)
---
[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/clEnqueueTask.c)
---
[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/hello_world.c)
[drag=50 10, drop=topright, font=bubblegum, fit=0.5]
@[64-68](Tear Down)
https://www.khronos.org/registry/OpenCL/sdk/1.2/
---








### OpenCL Programming Model
![width=1200, border=10px solid black](assets/oclflow.svg)
---
### OpenCL Memory Model
![width=1200, border=10px solid black](assets/fig/opencl_mem.svg)
---
### OpenCL Work Items
![width=1200, border=10px solid black](assets/fig/work_items.svg)
---
[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/vector_add.cpp)
[drag=30 10, drop=topright, font=bubblegum]
(Vector Addition)
@[118](Creating Context)
@[119](Creating Command Queue)
@[128](Build Program)
@[130](Create Kernel)
---
[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/vector_add.cpp)
[drag=30 10, drop=topright, font=bubblegum]
(CL Buffers)
@[132-134](Creating CL Buffers input (read))
@[136-138](Creating CL Buffers input (read))
@[141-143](Creating CL Buffers output (write))
---
[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/vector_add.cpp)
[drag=50 20, drop=topright, font=bubblegum fit=0.5]
(Copying Host Buffers to CL buffers)
@[152-155](input_a: Host Buffer, input_a_buf: CL Buffer)
@[156-159](input_b: Host Buffer,input_b_buf: CL Buffer)
---
[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/vector_add.cpp)
[drag=30 10, drop=topright, font=bubblegum]
(Setting Kernel Arguments)
@[163-171](Setting Kernel Arguments)
---
[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/vector_add.cpp)
[drag=30 10, drop=topright, font=bubblegum]
(Launching Job)
@[173-175](clEnqueueNDRangeKernel)
---
[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/vector_add.cpp)
[drag=30 10, drop=topright, font=bubblegum]
(Reading back the result.)
@[177-181](output: Host Buffer,output_buf: CL Buffer)
---
[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/vector_add.cpp)
[drag=30 10, drop=topright, font=bubblegum]
@[204-207](Query for the maximum work group size)
---
[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/snippets.cpp)
[drag=30 10, drop=topright, font=bubblegum]
@[86-97](Create Buffer in the Host Accesible Memory)
@[99-111](Map to host virtual address space)
@[115-117](Wait for a Prticular Event)
@[119-121](Profiling an Event)
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
### Expressing Paralleism
- NDRangeKernel |
- global_work_size() defines that total no. of elements. |
- if each element is independent it is also the number of work_items. |
- each work item can be associated with one thread. |
---
### Expressing Paralleism
- the global work can be separated into groups.
- get_group_id() gives the id of the group. 
- get_local_id() gives the id of the local work item within the group.
---

### Work Item Related Functions:
- get_work_dim()
- get_global_size()
- get_global_id()
- get_local_size()
- get_local_id()
- get_num_groups()
- get_group_id()
- get_global_offset() 

---
### Mapping of Work Items
![width=1200, border=10px solid black](assets/exec_model.png)
---
### Synchronization Functions: Mem Fence
- mem_fence: all memory accesses preceding mem_fence must end before starting memory accesses following mem_fence. |
- read_mem_fence : only for loads. |
- write_mem_fence: only for stores. | 
	- arguments: CLK_LOCAL_MEM_FENCE: only load/stores to local memory. |
	- arguments: CLK_GLOBAL_MEM_FENCE: only load/stores to global memory. |
---
### Synchronization Functions: Barrier
* All work-items in a work-group  must execute this function before the work group can proceed. |
* Barrier also issues a mem_fence either to CLK_LOCAL_MEM_FENCE or CLK_GLOBAL_MEM_FENCE. |
* There is no way to synchronize work items in different work groups. |
---
### Synchronization: OpenCL Command Barriers
-	Command Barrier
	-	cl_int clEnqueueBarrier (	cl_command_queue command_queue)
	-	all queued commands in command_queue before barrier must finish
		before starting the commands after barrier.

---
[drag=99, drop=center, fit=0.8]
@code[c](ocl_syntax/src/optimized.cl)
[drag=30 10, drop=topright, font=bubblegum]
(Vector Operations)
@[9-12](Vector-4  load )
@[13-14](Dot Operations)
---
#### References
https://www.khronos.org/assets/uploads/developers/library/2012-pan-pacific-road-show-June/OpenCL-Details-Taiwan_June-2012.pdf
https://www.khronos.org/registry/OpenCL/sdk/1.2/
---
### Debugger: MGD
* in tp-3a209-xx.enst.fr (desktop) clone the git depot.
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
* in tp-3a209-XX.enst.fr
	* $ source init.sh
	* $ module load mali/4.4
	* $ streamline
