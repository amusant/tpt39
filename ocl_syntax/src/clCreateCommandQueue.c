cl_command_queue clCreateCommandQueue(	cl_context context,
 										cl_device_id device,
 										cl_command_queue_properties properties,
 										cl_int *errcode_ret)

//context
//Must be a valid OpenCL context.

//device Must be a device associated with context. It can either be in the list
//of devices specified when context is created using clCreateContext or have the
//same device type as the device type specified when the context is created using
//clCreateContextFromType.

//properties Specifies a list of properties for the command-queue. This is a
//bit-field. Only command-queue properties specified in the table below can be
//set in properties; otherwise the value specified in properties is considered to
//be not valid.

//CL_QUEUE_OUT_OF_ORDER_EXEC_MODE_ENABLE CL_QUEUE_PROFILING_ENABLE

//errcode_ret Returns an appropriate error code. If errcode_ret is NULL, no error
//code is returned.
