### Accelerator Design with OpenCL
##### (Athens Week 19-24 March, 2018) 

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
+++?code=ocl_syntax/src/&lang=clBuildProgram.c&title=clBuildProgram

+++?code=ocl_syntax/src/hello_world.c&lang=c&title=Hello World
@[61](Create Kernel!! Finally gettiing down to buisness)
+++?code=ocl_syntax/src/&lang=clCreateKernel.c&title=clCreateKernel

+++?code=ocl_syntax/src/hello_world.c&lang=c&title=Hello World
@[62](Enqueue the Kernel in the queue)
+++?code=ocl_syntax/src/&lang=clEnqueueTask.c&title=clEnqueueTask

+++?code=ocl_syntax/src/hello_world.c&lang=c&title=Hello World
@[64-68](Tear Down)
https://www.khronos.org/registry/OpenCL/sdk/1.2/
