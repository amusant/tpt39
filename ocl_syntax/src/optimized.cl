kernel void matrix_multiply(global float4* const A,
				global float4* const B,
				global float2* C, uint n) {
	uint i = get_global_id (0);
	uint j = get_global_id (1);
	uint nv4 = n >> 2;
	float4 ab = (float4)(0.0f);
	for (uint k = 0; k < nv4; ++k) {
		float4 a0 = A[ 2*i *nv4+k];
		float4 a1 = A[(2*i+1)*nv4+k];
		float4 b0 = B[ 2*j *nv4+k];
		float4 b1 = B[(2*j+1)*nv4+k];
		ab += (float4)(dot(a0 , b0), dot(a0 , b1),
						dot(a1 , b0), dot(a1 , b1)); 
	}
	 uint ix = 2*i*(n>>1) + j;
	 C[ix] = ab.s01;
	 C[ix + (n>>1)] = ab.s23; 
}
