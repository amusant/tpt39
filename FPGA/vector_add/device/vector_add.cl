 // ACL kernel for adding two input vectors
 
__attribute__((num_compute_units(32)))
__attribute__((num_simd_work_items(4)))
__attribute__((reqd_work_group_size(256,1,1)))
__kernel void vector_add(__global const float *restrict x, 
                        __global const float *restrict y, 
                        __global float *restrict z)
{
    // get index of the work item
    int index = get_global_id(0);

    // add the vector elements
    z[index] = x[index] + y[index];
}

