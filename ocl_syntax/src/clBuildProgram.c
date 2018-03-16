
cl_int clBuildProgram (	cl_program program,
 						cl_uint num_devices,
 						const cl_device_id *device_list,
 						const char *options,
 						void (*pfn_notify)(cl_program, void *user_data),
 						void *user_data)

//program
//The program object

//device_list
//A pointer to a list of devices that are in program. If device_list is NULL
//value, the program executable is built for all devices associated with program
//for which a source or binary has been loaded. If device_list is a non-NULL
//value, the program executable is built for devices specified in this list for
//which a source or binary has been loaded.

//num_devices The number of devices listed in device_list.

//options A pointer to a string that describes the build options to be used for
//building the program executable. The list of supported options is described in
//"Build Options" below.

//pfn_notify A function pointer to a notification routine. The notification
//routine is a callback function that an application can register and which will
//be called when the program executable has been built (successfully or
//unsuccessfully). If pfn_notify is not NULL, clBuildProgram does not need to
//wait for the build to complete and can return immediately. If pfn_notify is
//NULL, clBuildProgram does not return until the build has completed. This
//callback function may be called asynchronously by the OpenCL implementation. It
//is the application's responsibility to ensure that the callback function is
//thread-safe.

//user_data Passed as an argument when pfn_notify is called. user_data can be
//NULL.
