################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/APP/main.c" \

C_SRCS += \
../Sources/APP/main.c \

OBJS += \
./Sources/APP/main.o \

C_DEPS += \
./Sources/APP/main.d \

OBJS_QUOTED += \
"./Sources/APP/main.o" \

C_DEPS_QUOTED += \
"./Sources/APP/main.d" \

OBJS_OS_FORMAT += \
./Sources/APP/main.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/APP/main.o: ../Sources/APP/main.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/APP/main.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/APP/main.o"
	@echo 'Finished building: $<'
	@echo ' '


