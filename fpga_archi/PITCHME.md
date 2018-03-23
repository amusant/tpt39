### Accelerator Design with OpenCL
##### (Athens Week 19-24 March, 2018) 
---
### FPGA Architecture: Overview
+++?image=assets/FPGAsArch.svg&size=auto 90%
---
### FPGA Architecture: Basic Logic Element
+++?image=assets/BLE.svg&size=auto 90%
---
### FPGA Architecture: Configurable Logic Block (CLB/LAB)
+++?image=assets/cluster.svg&size=auto 90%
---
### FPGA Architecture: Routing
+++?image=assets/FPGAroutingArch.svg&size=auto 90%
---
### FPGA Architecture: Hard Macros
+++?image=assets/stxv-floorplan.png&size=auto 70%
---
### FPGA Architecture: DSP Blocks
+++?image=assets/cyclonev_dsp.png&size=auto 70%
---
### FPGA : Design Input
* Hardware Description Language
	* VHDL 
	* Verilog
* Schematic
---
### FPGA : CAD FLOW
+++?image=assets/cad.svg&size=auto 90%
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
* OpenCL can be use to program both PCI-X cards and SOcFPGAs.
---
### SoCFPGA Architecture: Altera Cyclone V
+++?image=assets/fig/cyclonev.svg&size=auto 90%
---
### SoCFPGA Architecture: Xilinx Ultrascale
+++?image=assets/fig/ultrascale.svg&size=auto 90%
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
### OpenCL for FPGAs: Streams
+++?image=assets/fig/opencl_fpga_demo.svg&size=auto 30%
+++?image=assets/fig/opencl_fpga_demo1.svg&size=auto 30%
+++?image=assets/fig/opencl_fpga_demo2.svg&size=auto 30%
+++?image=assets/fig/opencl_fpga_demo3.svg&size=auto 30%
	
---

### OpenCL for FPGAs: LABWORK
