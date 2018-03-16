cl_context clCreateContext(	cl_context_properties *properties,
							cl_uint num_devices,
							const cl_device_id *devices,
							void *pfn_notify (
								const char *errinfo, 
								const void *private_info, 
								size_t cb, 
								void *user_data),
								void *user_data,
							cl_int *errcode_ret)

//An OpenCL context is created with one or more devices. Contexts are used by the
//OpenCL runtime for managing objects such as command-queues, memory, program and
//kernel objects and for executing kernels on one or more devices specified in
//the context.
