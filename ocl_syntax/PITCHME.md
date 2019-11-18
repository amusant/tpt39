### Accelerator Design with OpenCL
##### (Athens Week 18-22 Nov, 2019) 

---
### OpenCL Programming Model
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/oclflow.svg" height="400"/>

+++?code=ocl_syntax/src/hello_world.c&lang=c&title=Hello World
@[7-11](The OpenCL kernel.)
@[37](Get Platform Ids.)
+++?code=ocl_syntax/src/clGetPlatformIDs.c&lang=c&title=clGetPlatformIDs

+++?code=ocl_syntax/src/hello_world.c&lang=c&title=Hello World
@[38-46](Get Platform Info.)
+++?code=ocl_syntax/src/clGetPlatformInfo.c&lang=c&title=clGetPlatformInfo


+++?code=ocl_syntax/src/hello_world.c&lang=c&title=Hello World
@[49](Get Device Ids)
+++?code=ocl_syntax/src/clGetDeviceIDs.c&lang=c&title=clGetDeviceIDs

+++?code=ocl_syntax/src/hello_world.c&lang=c&title=Hello World
@[50](Create Context)
+++?code=ocl_syntax/src/clCreateContext.c&lang=c&title=clCreateContext

+++?code=ocl_syntax/src/hello_world.c&lang=c&title=Hello World
@[52](Create Command Queues)
+++?code=ocl_syntax/src/clCreateCommandQueue.c&lang=c&title=clCreateCommandQueue

+++?code=ocl_syntax/src/hello_world.c&lang=c&title=Hello World
@[53](Create Program from Source)
@[7-11](The OpenCL kernel source code pointed to by *opencl*.)
+++?code=ocl_syntax/src/clCreateProgramWithSource.c&lang=c&title=clCreateProgramWithSource

+++?code=ocl_syntax/src/hello_world.c&lang=c&title=Hello World
@[60](Build Program)
+++?code=ocl_syntax/src/clBuildProgram.c&lang=c&title=clBuildProgram

+++?code=ocl_syntax/src/hello_world.c&lang=c&title=Hello World
@[61](Create Kernel!! Finally gettiing down to buisness)
+++?code=ocl_syntax/src/clCreateKernel.c&lang=c&title=clCreateKernel

+++?code=ocl_syntax/src/hello_world.c&lang=c&title=Hello World
@[62](Enqueue the Kernel in the queue)
+++?code=ocl_syntax/src/clEnqueueTask.c&lang=c&title=clEnqueueTask

+++?code=ocl_syntax/src/hello_world.c&lang=c&title=Hello World
@[64-68](Tear Down)
https://www.khronos.org/registry/OpenCL/sdk/1.2/
---
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/oclflow.svg" height="400"/>
---
### OpenCL Memory Model
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/opencl_mem.svg" height="400"/>
---
### OpenCL Work Items
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/work_items.svg" height="400"/>
+++?code=ocl_syntax/src/vector_add.cpp&lang=c&title=Vector Addition
@[118](Creating Context)
@[119](Creating Command Queue)
@[119](Creating Command Queue)
@[129](Build Program)
@[131](Create Kernel)
+++?code=ocl_syntax/src/vector_add.cpp&lang=c&title=Creating CL Buffers
@[133-134](Creating CL Buffers input (read))
@[137-138](Creating CL Buffers input (read))
@[142-143](Creating CL Buffers output (write))
+++?code=ocl_syntax/src/vector_add.cpp&lang=c&title= Copying Host Buffers to CL buffers
@[153-155](input_a: Host Buffer, input_a_buf: CL Buffer)
@[157-159](input_b: Host Buffer,input_b_buf: CL Buffer)
+++?code=ocl_syntax/src/vector_add.cpp&lang=c&title= Setting Kernel Arguments
@[164-173](Setting Kernel Arguments)
+++?code=ocl_syntax/src/vector_add.cpp&lang=c&title= Launching Job
@[174-177](clEnqueueNDRangeKernel)
+++?code=ocl_syntax/src/vector_add.cpp&lang=c&title= Reading back the result.
@[178-181](output: Host Buffer,output_buf: CL Buffer)
+++?code=ocl_syntax/src/vector_add.cpp&lang=c&title= Reading back the result.
@[206-208](Query for the maximum work group size)
---
+++?code=ocl_syntax/src/snippets.cpp&lang=c&title=Snippets
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
#### References
https://www.khronos.org/assets/uploads/developers/library/2012-pan-pacific-road-show-June/OpenCL-Details-Taiwan_June-2012.pdf
https://www.khronos.org/registry/OpenCL/sdk/1.2/
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
