cl_int clGetPlatformIDs(cl_uint num_entries,
 						cl_platform_id *platforms,
 						cl_uint *num_platforms)

num_entries The number of cl_platform_id entries that can be added to
platforms. If platforms is not NULL, the num_entries must be greater than zero.

platforms Returns a list of OpenCL platforms found. The cl_platform_id values
returned in platforms can be used to identify a specific OpenCL platform. If
platforms argument is NULL, this argument is ignored. The number of OpenCL
platforms returned is the mininum of the value specified by num_entries or the
number of OpenCL platforms available.

num_platforms Returns the number of OpenCL platforms available. If
num_platforms is NULL, this argument is ignored.


