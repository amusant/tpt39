cl_int clGetPlatformInfo(	cl_platform_id platform,
 							cl_platform_info param_name,
 							size_t param_value_size,
 							void *param_value,
 							size_t *param_value_size_ret)
//platform The platform ID returned by clGetPlatformIDs or can be NULL. If
//platform is NULL, the behavior is implementation-defined.

//param_name: CL_PLATFORM_PROFILE CL_PLATFORM_VERSION CL_PLATFORM_NAME 
//				CL_PLATFORM_VENDOR  CL_PLATFORM_EXTENSIONS

//param_value_size Specifies the size in bytes of memory pointed to by
//param_value. This size in bytes must be greater than or equal to size of
//return type specified in the table below.

//param_value A pointer to memory location where appropriate values for a given
//param_value will be returned. Acceptable param_value values are listed in the
//table below. If param_value is NULL, it is ignored.

//param_value_size_ret Returns the actual size in bytes of data being queried
//by param_value. If param_value_size_ret is NULL, it is ignored
