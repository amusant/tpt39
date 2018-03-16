cl_int clGetDeviceIDs (	cl_platform_id  platform ,
 	cl_device_type  device_type ,
 	cl_uint  num_entries ,
 	cl_device_id  *devices ,
 	cl_uint  *num_devices )

//platform
//Refers to the platform ID returned by clGetPlatformIDs or can be NULL. If platform is NULL, the behavior is implementation-defined.

//device_type
//CL_DEVICE_TYPE_CPU
//CL_DEVICE_TYPE_GPU
//CL_DEVICE_TYPE_ACCELERATOR
//CL_DEVICE_TYPE_CUSTOM
//CL_DEVICE_TYPE_DEFAULT
//CL_DEVICE_TYPE_ALL

//num_entries
//The number of cl_device_id entries that can be added to devices. If devices is not NULL, the num_entries must be greater than zero.

//devices
//A list of OpenCL devices found. The cl_device_id values returned in devices can be used to identify a specific OpenCL device. If devices argument is NULL, this argument is ignored. The number of OpenCL devices returned is the mininum of the value specified by num_entries or the number of OpenCL devices whose type matches device_type.

//num_devices
//The number of OpenCL devices available that match device_type. If num_devices is NULL, this argument is ignored.
