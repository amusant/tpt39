cl_kernel clCreateKernel (	cl_program  program,
 							const char *kernel_name,
 							cl_int *errcode_ret)
//program
//A program object with a successfully built executable.

//kernel_name
//A function name in the program declared with the __kernel qualifier

//errcode_ret
//Returns an appropriate error code. If errcode_ret is NULL, no error code is
//returned.

//CL_INVALID_PROGRAM if program is not a valid program object.

//CL_INVALID_PROGRAM_EXECUTABLE if there is no successfully built executable for
//program.  

//CL_INVALID_KERNEL_NAME if kernel_name is not found in program.

//CL_INVALID_KERNEL_DEFINITION if the function definition for __kernel function
//given by kernel_name such as the number of arguments, the argument types are
//not the same for all devices for which the program executable has been built.

//CL_INVALID_VALUE if kernel_name is NULL.  CL_OUT_OF_RESOURCES if there is a
//failure to allocate resources required by the OpenCL implementation on the
//device.  

//CL_OUT_OF_HOST_MEMORY if there is a failure to allocate resources
//required by the OpenCL implementation on the host.

