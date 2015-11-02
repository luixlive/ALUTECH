################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/HIL/actuadores.c" \
"../Sources/HIL/sensores.c" \

C_SRCS += \
../Sources/HIL/actuadores.c \
../Sources/HIL/sensores.c \

OBJS += \
./Sources/HIL/actuadores.o \
./Sources/HIL/sensores.o \

C_DEPS += \
./Sources/HIL/actuadores.d \
./Sources/HIL/sensores.d \

OBJS_QUOTED += \
"./Sources/HIL/actuadores.o" \
"./Sources/HIL/sensores.o" \

C_DEPS_QUOTED += \
"./Sources/HIL/actuadores.d" \
"./Sources/HIL/sensores.d" \

OBJS_OS_FORMAT += \
./Sources/HIL/actuadores.o \
./Sources/HIL/sensores.o \


# Each subdirectory must supply rules for building sources it contributes
Sources/HIL/actuadores.o: ../Sources/HIL/actuadores.c
	@echo 'Building file: $<'
	@echo 'Executing target #2 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/HIL/actuadores.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/HIL/actuadores.o"
	@echo 'Finished building: $<'
	@echo ' '

Sources/HIL/sensores.o: ../Sources/HIL/sensores.c
	@echo 'Building file: $<'
	@echo 'Executing target #3 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Sources/HIL/sensores.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Sources/HIL/sensores.o"
	@echo 'Finished building: $<'
	@echo ' '


