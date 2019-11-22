### Accelerator Design with OpenCL
##### (Athens Week 18-22 Nov, 2019) 

---
### OpenCL Execution Model
<img src="assets/OpenCL-Execution-Model.png" height="400"/>
---
### CUDA Execution Model
<img src="assets/grid-of-thread-blocks.png" height="400"/>
---
+++?code=cuda/vectorAdd_kernel.cu&lang=c&title=Cuda Kernel
@[37-41](CUDA Kernel)
+++?code=cuda/nvrtc_helper.h&lang=c&title=Creating and Compiling Kernel
@[108-112](Creating and Compiling Kernel)
+++?code=cuda/vectorAdd.cpp&lang=c&title=Creating and Allocating Buffers
@[87-97](Creating and Allocating Buffers)
+++?code=cuda/vectorAdd.cpp&lang=c&title=Copy input Data from Host to Device
@[101-103](Copy input Data from Host to Device)
+++?code=cuda/vectorAdd.cpp&lang=c&title=Launching CUDA Kernel
@[106-122](Launching CUDA Kernel)
+++?code=cuda/vectorAdd.cpp&lang=c&title=Copy output Data from Device to Host
@[127-128](Copy output Data from Device to Host)
---
