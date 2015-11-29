################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/HAL/ADCDriver.c" \
"../Sources/HAL/LCDDriver.c" \
"../Sources/HAL/PWMDriver.c" \
"../Sources/HAL/digitalportsDriver.c" \

C_SRCS += \
../Sources/HAL/ADCDriver.c \
../Sources/HAL/LCDDriver.c \
../Sources/HAL/PWMDriver.c \
../Sources/HAL/digitalportsDriver.c \

OBJS += \
./Sources/HAL/ADCDriver.o \
./Sources/HAL/LCDDriver.o \
./Sources/HAL/PWMDriver.o \
./Sources/HAL/digitalportsDriver.o \

C_DEPS += \
./Sources/HAL/ADCDriver.d \
./Sources/HAL/LCDDriver.d \
./Sources/HAL/PWMDriver.d \
./Sources/HAL/digitalportsDriver.d \

OBJS_QUOTED += \
"./Sources/HAL/ADCDriver.o" \
"./Sources/HAL/LCDDriver.o" \
"./Sources/HAL/PWMDriver.o" \
"./Sources/HAL/digitalportsDriver.o" \

C_DEPS_QUOTED += \
"./Sources/HAL/ADCDriver.d" \
"./Sources/HAL/LCDDriver.d" \
"./Sources/HAL/PWMDriver.d" \
"./Sources/HAL/digitalportsDriver.d" \

OBJS_OS_FORMAT += \
./Sources/HAL/ADCDriver.o \
./Sources/HAL/LCDDriver.o \
./Sources/HAL/PWMDriver.o \
./Sources/HAL/digitalportsDriver.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/HAL/ADCDriver.o: ../Sources/HAL/ADCDriver.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/HAL/ADCDriver.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/HAL/ADCDriver.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/HAL/LCDDriver.o: ../Sources/HAL/LCDDriver.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/HAL/LCDDriver.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/HAL/LCDDriver.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/HAL/PWMDriver.o: ../Sources/HAL/PWMDriver.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/HAL/PWMDriver.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/HAL/PWMDriver.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/HAL/digitalportsDriver.o: ../Sources/HAL/digitalportsDriver.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/HAL/digitalportsDriver.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/HAL/digitalportsDriver.o"
	@echo 'Finished building: $<'
	@echo ' '


