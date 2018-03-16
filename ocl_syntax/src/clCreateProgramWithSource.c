cl_program clCreateProgramWithSource (	cl_context context,
 										cl_uint count,
 										const char **strings,
 										const size_t *lengths,
 										cl_int *errcode_ret)
//context
//Must be a valid OpenCL context.

//strings
//An array of count pointers to optionally null-terminated character strings that
//make up the source code.

//lengths An array with the number of chars in each string (the string length).
//If an element in lengths is zero, its accompanying string is null-terminated.
//If lengths is NULL, all strings in the strings argument are considered
//null-terminated. Any length value passed in that is greater than zero excludes
//the null terminator in its count.

//errcode_ret Returns an appropriate error code. If errcode_ret is NULL, no error
//code is returned.


