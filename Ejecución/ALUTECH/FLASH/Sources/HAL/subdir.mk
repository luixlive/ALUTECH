################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/HAL/ADCDriver.c" \

C_SRCS += \
../Sources/HAL/ADCDriver.c \

OBJS += \
./Sources/HAL/ADCDriver.o \

C_DEPS += \
./Sources/HAL/ADCDriver.d \

OBJS_QUOTED += \
"./Sources/HAL/ADCDriver.o" \

C_DEPS_QUOTED += \
"./Sources/HAL/ADCDriver.d" \

OBJS_OS_FORMAT += \
./Sources/HAL/ADCDriver.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/HAL/ADCDriver.o: ../Sources/HAL/ADCDriver.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/HAL/ADCDriver.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/HAL/ADCDriver.o"
	@echo 'Finished building: $<'
	@echo ' '


