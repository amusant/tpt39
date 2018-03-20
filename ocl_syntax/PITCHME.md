### Accelerator Design with OpenCL
##### (Athens Week 19-24 March, 2018) 

+++?image=assets/oclflow.svg&size=auto 90%
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
+++?code=ocl_syntax/src/vector_add.cpp&lang=c&title=Vector Addition
@[118](Creating Context)
@[119](Creating Command Queue)
@[119](Creating Command Queue)
@[129](Build Program)
@[131](Create Kernel)
---
#### References
https://www.khronos.org/assets/uploads/developers/library/2012-pan-pacific-road-show-June/OpenCL-Details-Taiwan_June-2012.pdf
https://www.khronos.org/registry/OpenCL/sdk/1.2/
