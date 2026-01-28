################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
%.obj: ../%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/CCS/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu0 -Ooff --include_path="D:/C2000_workspace_v12/epwm_ex1_trip_zone" --include_path="D:/CCS/ti/C2000/C2000Ware_6_00_01_00" --include_path="D:/C2000_workspace_v12/epwm_ex1_trip_zone/device" --include_path="D:/CCS/ti/C2000/C2000Ware_6_00_01_00/driverlib/f28004x/driverlib" --include_path="D:/CCS/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" --define=DEBUG --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" --include_path="D:/C2000_workspace_v12/epwm_ex1_trip_zone/CPU1_RAM/syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

build-524895583: ../epwm_ex1_trip_zone.syscfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: SysConfig'
	"D:/CCS/ti/ccs1281/ccs/utils/sysconfig/sysconfig_cli.bat" --script "D:/C2000_workspace_v12/epwm_ex1_trip_zone/epwm_ex1_trip_zone.syscfg" -o "syscfg" -s "D:/CCS/ti/C2000/C2000Ware_6_00_01_00/.metadata/sdk.json" -d "F28004x" --package F28004x_100PZ --part F28004x_100PZ --compiler ccs
	@echo 'Finished building: "$<"'
	@echo ' '

syscfg/board.c: build-524895583 ../epwm_ex1_trip_zone.syscfg
syscfg/board.h: build-524895583
syscfg/board.cmd.genlibs: build-524895583
syscfg/board.opt: build-524895583
syscfg/board.json: build-524895583
syscfg/pinmux.csv: build-524895583
syscfg/epwm.dot: build-524895583
syscfg/device.c: build-524895583
syscfg/device.h: build-524895583
syscfg/adc.dot: build-524895583
syscfg/sysctl_config.c: build-524895583
syscfg/c2000ware_libraries.cmd.genlibs: build-524895583
syscfg/c2000ware_libraries.opt: build-524895583
syscfg/c2000ware_libraries.c: build-524895583
syscfg/c2000ware_libraries.h: build-524895583
syscfg/clocktree.h: build-524895583
syscfg: build-524895583

syscfg/%.obj: ./syscfg/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/CCS/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu0 -Ooff --include_path="D:/C2000_workspace_v12/epwm_ex1_trip_zone" --include_path="D:/CCS/ti/C2000/C2000Ware_6_00_01_00" --include_path="D:/C2000_workspace_v12/epwm_ex1_trip_zone/device" --include_path="D:/CCS/ti/C2000/C2000Ware_6_00_01_00/driverlib/f28004x/driverlib" --include_path="D:/CCS/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" --define=DEBUG --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="syscfg/$(basename $(<F)).d_raw" --include_path="D:/C2000_workspace_v12/epwm_ex1_trip_zone/CPU1_RAM/syscfg" --obj_directory="syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

f28004x_codestartbranch.obj: D:/CCS/ti/C2000/C2000Ware_6_00_01_00/device_support/f28004x/common/source/f28004x_codestartbranch.asm $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"D:/CCS/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla2 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu0 -Ooff --include_path="D:/C2000_workspace_v12/epwm_ex1_trip_zone" --include_path="D:/CCS/ti/C2000/C2000Ware_6_00_01_00" --include_path="D:/C2000_workspace_v12/epwm_ex1_trip_zone/device" --include_path="D:/CCS/ti/C2000/C2000Ware_6_00_01_00/driverlib/f28004x/driverlib" --include_path="D:/CCS/ti/ccs1281/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" --define=DEBUG --diag_suppress=10063 --diag_warning=225 --diag_wrap=off --display_error_number --gen_func_subsections=on --abi=eabi --preproc_with_compile --preproc_dependency="$(basename $(<F)).d_raw" --include_path="D:/C2000_workspace_v12/epwm_ex1_trip_zone/CPU1_RAM/syscfg" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


