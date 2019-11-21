### Accelerator Design with OpenCL
##### (Athens Week 18-22 Nov, 2019) 
---
### FPGA Architecture: Overview
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/FPGAsArch.svg" height="400"/>
---
### FPGA Architecture: Basic Logic Element
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/BLE.svg" height="400"/>
---
### FPGA Architecture: Configurable Logic Block (CLB/LAB)
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/cluster.svg" height="400"/>
---
### FPGA Architecture: Routing
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/FPGAroutingArch.svg" height="400"/>
---
### FPGA Architecture: Hard Macros
<img src="assets/stxv-floorplan.png" height="400"/>
---
### FPGA Architecture: DSP Blocks
<img src="assets/cyclonev_dsp.png" height="400"/>
---
### FPGA : Design Input
* Hardware Description Language
	* VHDL 
	* Verilog
* Schematic
---
### FPGA : CAD FLOW
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/cad.svg" height="400"/>
---
### FPGA: Applications
* Prototyping, ASIC Emulation |
	- FPGAs can emulate all hardware
* Low/Medium  volume hardware |
	* Telecom Equipment |
* Low Latency Real-Time Systems |
	* Drones, Financial Feeds |
* Military |
* Accelerators |

---

### FPGAs as Accelerators
- Traditional
	- PCI-Xpress add-on cards for desktop. |
- Embedded |
	- SoCFPGAs | 
- Cloud |
	-	Amazon cloud F1 Instances |
	- 	OVH |

---
### SoCFPGAs
* FPGAs on the same die as Chip Multi-Processors
	- Altera/Intel Cyclone V, Arria V, Stratix 10
	- Xilix Zynq, Zynq Ultrascale
* OpenCL can be use to program both PCI-X cards and SocFPGAs.
---
### SoCFPGA Architecture: Altera Cyclone V
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/cycloneV.svg" height="400"/>
---
### SoCFPGA Architecture: Xilinx Ultrascale
<img src="http://perso.telecom-paristech.fr/~chaudhur/tpt39/ultrascale.svg" height="400"/>
---
### FPGA Architecture: example
* PCI-X based card Stratix 10
	- 5,510,000 BLEs (equivalent)
	- 7,470,420 Registers
	- 3960 DSP Slices
	- 170 MB Memory Blocks
	- 7.9 TMACs/s
	- 3.2 TFlops/s
---
### FPGA Architecture: example
* SoCFPGA Ultrascale
	- 600,000 BLEs (equivalent)
	- 32.1 MB memory
	- 2520 DSP Slice
	- Quad Core ARM Cortex-A53
	- Dual Core ARM Cortex R5
	- ARM Mali 400 MP2
---
### OpenCL for FPGAs
- each loopnest is transformed to a hardware pipeline. |
- Extensions: FIFO stream. |
---
### OpenCL for FPGAs
<img src="assets/fpga_opencl.png" height="400"/>
---
### OpenCL for FPGAs : Loop Mapped to hardware
<img src="assets/fpga_opencl1.png" height="400"/>
---
### OpenCL for FPGAs : Loop Mapped to hardware
<img src="assets/fpga_opencl2.png" height="400"/>
---
### OpenCL for FPGAs:Streams
<img src="assets/fpga_streams.png" height="400"/>
---
### OpenCL for FPGAs: Streams
+++?image=http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/opencl_fpga_demo.svg&size=auto 40%
+++?image=http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/opencl_fpga_demo1.svg&size=auto 40%
+++?image=http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/opencl_fpga_demo2.svg&size=auto 40%
+++?image=http://perso.telecom-paristech.fr/~chaudhur/tpt39/fig/opencl_fpga_demo3.svg&size=auto 40%
	
---
## Differences with MALI OpenCL
* Core and SIMD width are configurable.
* Use of Streams.
* No Cache .....
	* the current platform doesn't use cache coherence 
* But More Local Memory

* MMU ? what could be the problem ?

---  
### OpenCL for FPGAs: LAB WORK
* setup
	* git pull
	* source init.sh
	* module load altera/17.0
	* module load altera/s5_ref
---
### OpenCL for FPGAs: LAB WORK
* Go to FPGA/vector_add
	* compile for emulation
		* make cl_compile
		* make all
		* make sim
	* build
		* make build
* Check reports


