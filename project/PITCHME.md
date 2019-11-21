### Accelerator Design with OpenCL
##### (Athens Week 18-22 Nov, 2019) 
---
### What do we know so far ?
- There are three types of parallelism |
	- Task Parallelism |
	- Data Parallelism |
	- Pipeline |

- The Amdahl's Law |

- We saw the reasons for memory stalls and latency. |

- The techniques to hide latency through Caching. |

- The Virtual Memory. |
---
### What do we know so far ?
- We saw the evolution of processors from |
	- Uniprocessor to ... |
	- Multicores with Simultaneous Multi-Threading. |

- And we said hello to the world from our GPU (Mali-T628). |
---
### What do we know so far ?
- We saw the GPU architecture evolve to a Multi-Threaded SIMD Mulitprocessor. |
- We saw a SoC archietcture with and some deatils about Mali T628. |
- We know how to launch a OpenCL kernel |
	- Platfrom-> Device-> Context-> Command Queue -> compile kernel |
	- Create Buffers-> Copy Buffers from CPU to  GPU  |
	- Create Buffers-> Map Buffers  |
	- Launch Kernel-> readback result buffers |
---
### What do we know so far ?
- We know how to express parallelism using: |
	- get_global_id() |
- We know how to express dependence using: |
	- get_local_id(), get_group_id() |
- We learned about synchronization functions: |
	- fence, barrier |
- We saw the use of Mali Graphics Degugger |
---

### LAB WORK 1
- Vector addition with size N 
- Calculate speedup with varying N.
- Measure Flops/s.
- Measure speedup.
---
### LAB WORK 2
- Write a Matrix multiplication routing with two matrices of size M x K, K x N.
- where M=K=N
- measure speed up
- Do matrix multiplication using workgroups.
- measure speed up
- use streamline to see various statistics about Cache/TLB miss.
- Measure Flops/S.
---
### Project: Video Filtering
- checkout the videofilter directory under tpt39/GPU
- we do two filters 
	- GaussianBlur
	- Sobel Edge Detection
- opencv docs:
	- <span style="font-size:0.4em">https://docs.opencv.org/2.4/modules/imgproc/doc/filtering.html?highlight=gaussianblur#gaussianblur
	- <span style="font-size:0.4em">https://docs.opencv.org/2.4/doc/tutorials/imgproc/imgtrans/sobel_derivatives/sobel_derivatives.html
---
### Project: Useful functions
* to copy opencv mat to  an array:
	* memcpy(input,cameraFrame.data, 3\*ROWS\*COLS\*sizeof(char));
* to pad:
	- copyMakeBorder( src, dst, top, bottom, left, right, borderType, value );
	- <span style="font-size:0.4em">https://docs.opencv.org/2.4/doc/tutorials/imgproc/imgtrans/copyMakeBorder/copyMakeBorder.html
---
### Project: Useful functions
* Mat data type:
	- <span style="font-size:0.4em">https://docs.opencv.org/2.4/modules/core/doc/basic_structures.html#mat
* Mat Convert data type:
	- <span style="font-size:0.4em">https://docs.opencv.org/2.4/modules/core/doc/basic_structures.html#mat-convertto
---
### Project: 
* Can do direct convolution.
* Can do im2col + Matrix multiplication.
* Try processing in Batches to reduce OpennCL launching overhead.
* Get performance statistics.
---
### Project/Lab works
* git clone git@github.com:amusant/tpt39.git
* use sshfs to mirror the same directory on both desktop and GPU card.
	* sshfs odroid@[odroid-ip]:~/tpt39 ./tpt39
---
### Debugger: MGD
* in tp-3a209-XX.enst.fr (desktop) clone the git depot. 
* you can also use  the sshfs with the odroid board.
* source init.sh 
* mgd

	* in odroid
	* source init_odroid.sh
	* mgddaemon
	* make debug
---
### Performance Monitor: Streamline

*  in odroid  run start_gator.sh in tpt39/
	* cd tpt39; ./start_gator_on_odroid.sh&
* in tp-3a209-XX.enst.fr
	* $ source init.sh
	* $ streamline
---
### MythBusters GPU Vs. CPU
---?video=https://www.youtube.com/watch?v=-P28LKWTzrI

