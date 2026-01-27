/*
 * Copyright (c) 2020 Texas Instruments Incorporated - http://www.ti.com
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include "board.h"

//*****************************************************************************
//
// Board Configurations
// Initializes the rest of the modules. 
// Call this function in your application if you wish to do all module 
// initialization.
// If you wish to not use some of the initializations, instead of the 
// Board_init use the individual Module_inits
//
//*****************************************************************************
void Board_init()
{
	EALLOW;

	PinMux_init();
	SYSCTL_init();
	SYNC_init();
	ASYSCTL_init();
	ADC_init();
	AIO_init();
	CAN_init();
	EPWM_init();
	I2C_init();
	PGA_init();
	SCI_init();
	SPI_init();

	EDIS;
}

//*****************************************************************************
//
// PINMUX Configurations
//
//*****************************************************************************
void PinMux_init()
{
	//
	// PinMux for modules assigned to CPU1
	//
	
	// AIO246 -> myAIO0 Pinmux
	GPIO_setPinConfig(GPIO_246_GPIO246);
	GPIO_setAnalogMode(246, GPIO_ANALOG_DISABLED);
	// AIO241 -> myAIO1 Pinmux
	GPIO_setPinConfig(GPIO_241_GPIO241);
	GPIO_setAnalogMode(241, GPIO_ANALOG_DISABLED);
	// AIO230 -> myAIO2 Pinmux
	GPIO_setPinConfig(GPIO_230_GPIO230);
	GPIO_setAnalogMode(230, GPIO_ANALOG_DISABLED);
	// AIO227 -> myAIO3 Pinmux
	GPIO_setPinConfig(GPIO_227_GPIO227);
	GPIO_setAnalogMode(227, GPIO_ANALOG_DISABLED);
	// AIO236 -> myAIO4 Pinmux
	GPIO_setPinConfig(GPIO_236_GPIO236);
	GPIO_setAnalogMode(236, GPIO_ANALOG_DISABLED);
	// AIO229 -> myAIO5 Pinmux
	GPIO_setPinConfig(GPIO_229_GPIO229);
	GPIO_setAnalogMode(229, GPIO_ANALOG_DISABLED);
	// AIO225 -> myAIO6 Pinmux
	GPIO_setPinConfig(GPIO_225_GPIO225);
	GPIO_setAnalogMode(225, GPIO_ANALOG_DISABLED);
	// AIO234 -> myAIO7 Pinmux
	GPIO_setPinConfig(GPIO_234_GPIO234);
	GPIO_setAnalogMode(234, GPIO_ANALOG_DISABLED);
	// AIO245 -> myAIO8 Pinmux
	GPIO_setPinConfig(GPIO_245_GPIO245);
	GPIO_setAnalogMode(245, GPIO_ANALOG_DISABLED);
	// AIO238 -> myAIO9 Pinmux
	GPIO_setPinConfig(GPIO_238_GPIO238);
	GPIO_setAnalogMode(238, GPIO_ANALOG_DISABLED);
	// AIO240 -> myAIO10 Pinmux
	GPIO_setPinConfig(GPIO_240_GPIO240);
	GPIO_setAnalogMode(240, GPIO_ANALOG_DISABLED);
	// AIO231 -> myAIO11 Pinmux
	GPIO_setPinConfig(GPIO_231_GPIO231);
	GPIO_setAnalogMode(231, GPIO_ANALOG_DISABLED);
	// AIO232 -> myAIO12 Pinmux
	GPIO_setPinConfig(GPIO_232_GPIO232);
	GPIO_setAnalogMode(232, GPIO_ANALOG_DISABLED);
	// AIO244 -> myAIO13 Pinmux
	GPIO_setPinConfig(GPIO_244_GPIO244);
	GPIO_setAnalogMode(244, GPIO_ANALOG_DISABLED);
	// AIO237 -> myAIO14 Pinmux
	GPIO_setPinConfig(GPIO_237_GPIO237);
	GPIO_setAnalogMode(237, GPIO_ANALOG_DISABLED);
	// AIO239 -> myAIO15 Pinmux
	GPIO_setPinConfig(GPIO_239_GPIO239);
	GPIO_setAnalogMode(239, GPIO_ANALOG_DISABLED);
	// AIO233 -> myAIO16 Pinmux
	GPIO_setPinConfig(GPIO_233_GPIO233);
	GPIO_setAnalogMode(233, GPIO_ANALOG_DISABLED);
	// AIO224 -> myAIO17 Pinmux
	GPIO_setPinConfig(GPIO_224_GPIO224);
	GPIO_setAnalogMode(224, GPIO_ANALOG_DISABLED);
	// AIO242 -> myAIO18 Pinmux
	GPIO_setPinConfig(GPIO_242_GPIO242);
	GPIO_setAnalogMode(242, GPIO_ANALOG_DISABLED);
	// AIO226 -> myAIO19 Pinmux
	GPIO_setPinConfig(GPIO_226_GPIO226);
	GPIO_setAnalogMode(226, GPIO_ANALOG_DISABLED);
	// AIO228 -> myAIO20 Pinmux
	GPIO_setPinConfig(GPIO_228_GPIO228);
	GPIO_setAnalogMode(228, GPIO_ANALOG_DISABLED);
	//
	// CANB -> myCAN0 Pinmux
	//
	GPIO_setPinConfig(myCAN0_CANRX_PIN_CONFIG);
	GPIO_setPadConfig(myCAN0_CANRX_GPIO, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(myCAN0_CANRX_GPIO, GPIO_QUAL_ASYNC);

	GPIO_setPinConfig(myCAN0_CANTX_PIN_CONFIG);
	GPIO_setPadConfig(myCAN0_CANTX_GPIO, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(myCAN0_CANTX_GPIO, GPIO_QUAL_ASYNC);

	//
	// EPWM7 -> myEPWM0 Pinmux
	//
	GPIO_setPinConfig(myEPWM0_EPWMA_PIN_CONFIG);
	GPIO_setPadConfig(myEPWM0_EPWMA_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myEPWM0_EPWMA_GPIO, GPIO_QUAL_SYNC);

	GPIO_setPinConfig(myEPWM0_EPWMB_PIN_CONFIG);
	GPIO_setPadConfig(myEPWM0_EPWMB_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myEPWM0_EPWMB_GPIO, GPIO_QUAL_SYNC);

	//
	// EPWM4 -> myEPWM1 Pinmux
	//
	GPIO_setPinConfig(myEPWM1_EPWMA_PIN_CONFIG);
	GPIO_setPadConfig(myEPWM1_EPWMA_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myEPWM1_EPWMA_GPIO, GPIO_QUAL_SYNC);

	GPIO_setPinConfig(myEPWM1_EPWMB_PIN_CONFIG);
	GPIO_setPadConfig(myEPWM1_EPWMB_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myEPWM1_EPWMB_GPIO, GPIO_QUAL_SYNC);

	//
	// EPWM2 -> myEPWM2 Pinmux
	//
	GPIO_setPinConfig(myEPWM2_EPWMA_PIN_CONFIG);
	GPIO_setPadConfig(myEPWM2_EPWMA_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myEPWM2_EPWMA_GPIO, GPIO_QUAL_SYNC);

	GPIO_setPinConfig(myEPWM2_EPWMB_PIN_CONFIG);
	GPIO_setPadConfig(myEPWM2_EPWMB_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(myEPWM2_EPWMB_GPIO, GPIO_QUAL_SYNC);

	//
	// I2CA -> myI2C0 Pinmux
	//
	GPIO_setPinConfig(myI2C0_I2CSDA_PIN_CONFIG);
	GPIO_setPadConfig(myI2C0_I2CSDA_GPIO, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(myI2C0_I2CSDA_GPIO, GPIO_QUAL_ASYNC);

	GPIO_setPinConfig(myI2C0_I2CSCL_PIN_CONFIG);
	GPIO_setPadConfig(myI2C0_I2CSCL_GPIO, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(myI2C0_I2CSCL_GPIO, GPIO_QUAL_ASYNC);

	//
	// SCIB -> mySCI0 Pinmux
	//
	GPIO_setPinConfig(mySCI0_SCIRX_PIN_CONFIG);
	GPIO_setPadConfig(mySCI0_SCIRX_GPIO, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(mySCI0_SCIRX_GPIO, GPIO_QUAL_ASYNC);

	GPIO_setPinConfig(mySCI0_SCITX_PIN_CONFIG);
	GPIO_setPadConfig(mySCI0_SCITX_GPIO, GPIO_PIN_TYPE_STD | GPIO_PIN_TYPE_PULLUP);
	GPIO_setQualificationMode(mySCI0_SCITX_GPIO, GPIO_QUAL_ASYNC);

	//
	// SPIA -> mySPI0 Pinmux
	//
	GPIO_setPinConfig(mySPI0_SPIPICO_PIN_CONFIG);
	GPIO_setPadConfig(mySPI0_SPIPICO_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(mySPI0_SPIPICO_GPIO, GPIO_QUAL_ASYNC);

	GPIO_setPinConfig(mySPI0_SPIPOCI_PIN_CONFIG);
	GPIO_setPadConfig(mySPI0_SPIPOCI_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(mySPI0_SPIPOCI_GPIO, GPIO_QUAL_ASYNC);

	GPIO_setPinConfig(mySPI0_SPICLK_PIN_CONFIG);
	GPIO_setPadConfig(mySPI0_SPICLK_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(mySPI0_SPICLK_GPIO, GPIO_QUAL_ASYNC);

	GPIO_setPinConfig(mySPI0_SPIPTE_PIN_CONFIG);
	GPIO_setPadConfig(mySPI0_SPIPTE_GPIO, GPIO_PIN_TYPE_STD);
	GPIO_setQualificationMode(mySPI0_SPIPTE_GPIO, GPIO_QUAL_ASYNC);


}

//*****************************************************************************
//
// ADC Configurations
//
//*****************************************************************************
void ADC_init(){
	myADC0_init();
	myADC1_init();
	myADC2_init();
}

void myADC0_init(){
	//
	// ADC Initialization: Write ADC configurations and power up the ADC
	//
	// Set the analog voltage reference selection and ADC module's offset trims.
	// This function sets the analog voltage reference to internal (with the reference voltage of 1.65V or 2.5V) or external for ADC
	// which is same as ASysCtl APIs.
	//
	ADC_setVREF(myADC0_BASE, ADC_REFERENCE_EXTERNAL, ADC_REFERENCE_2_5V);
	//
	// Configures the analog-to-digital converter module prescaler.
	//
	ADC_setPrescaler(myADC0_BASE, ADC_CLK_DIV_2_0);
	//
	// Sets the timing of the end-of-conversion pulse
	//
	ADC_setInterruptPulseMode(myADC0_BASE, ADC_PULSE_END_OF_ACQ_WIN);
	//
	// Sets the timing of early interrupt generation.
	//
	ADC_setInterruptCycleOffset(myADC0_BASE, 0U);
	//
	// Powers up the analog-to-digital converter core.
	//
	ADC_enableConverter(myADC0_BASE);
	//
	// Delay for 1ms to allow ADC time to power up
	//
	DEVICE_DELAY_US(500);
	//
	// SOC Configuration: Setup ADC EPWM channel and trigger settings
	//
	// Disables SOC burst mode.
	//
	ADC_disableBurstMode(myADC0_BASE);
	//
	// Sets the priority mode of the SOCs.
	//
	ADC_setSOCPriority(myADC0_BASE, ADC_PRI_ALL_ROUND_ROBIN);
}

void myADC1_init(){
	//
	// ADC Initialization: Write ADC configurations and power up the ADC
	//
	// Set the analog voltage reference selection and ADC module's offset trims.
	// This function sets the analog voltage reference to internal (with the reference voltage of 1.65V or 2.5V) or external for ADC
	// which is same as ASysCtl APIs.
	//
	ADC_setVREF(myADC1_BASE, ADC_REFERENCE_EXTERNAL, ADC_REFERENCE_2_5V);
	//
	// Configures the analog-to-digital converter module prescaler.
	//
	ADC_setPrescaler(myADC1_BASE, ADC_CLK_DIV_2_0);
	//
	// Sets the timing of the end-of-conversion pulse
	//
	ADC_setInterruptPulseMode(myADC1_BASE, ADC_PULSE_END_OF_ACQ_WIN);
	//
	// Sets the timing of early interrupt generation.
	//
	ADC_setInterruptCycleOffset(myADC1_BASE, 0U);
	//
	// Powers up the analog-to-digital converter core.
	//
	ADC_enableConverter(myADC1_BASE);
	//
	// Delay for 1ms to allow ADC time to power up
	//
	DEVICE_DELAY_US(500);
	//
	// SOC Configuration: Setup ADC EPWM channel and trigger settings
	//
	// Disables SOC burst mode.
	//
	ADC_disableBurstMode(myADC1_BASE);
	//
	// Sets the priority mode of the SOCs.
	//
	ADC_setSOCPriority(myADC1_BASE, ADC_PRI_ALL_ROUND_ROBIN);
}

void myADC2_init(){
	//
	// ADC Initialization: Write ADC configurations and power up the ADC
	//
	// Set the analog voltage reference selection and ADC module's offset trims.
	// This function sets the analog voltage reference to internal (with the reference voltage of 1.65V or 2.5V) or external for ADC
	// which is same as ASysCtl APIs.
	//
	ADC_setVREF(myADC2_BASE, ADC_REFERENCE_EXTERNAL, ADC_REFERENCE_2_5V);
	//
	// Configures the analog-to-digital converter module prescaler.
	//
	ADC_setPrescaler(myADC2_BASE, ADC_CLK_DIV_2_0);
	//
	// Sets the timing of the end-of-conversion pulse
	//
	ADC_setInterruptPulseMode(myADC2_BASE, ADC_PULSE_END_OF_ACQ_WIN);
	//
	// Sets the timing of early interrupt generation.
	//
	ADC_setInterruptCycleOffset(myADC2_BASE, 0U);
	//
	// Powers up the analog-to-digital converter core.
	//
	ADC_enableConverter(myADC2_BASE);
	//
	// Delay for 1ms to allow ADC time to power up
	//
	DEVICE_DELAY_US(500);
	//
	// SOC Configuration: Setup ADC EPWM channel and trigger settings
	//
	// Disables SOC burst mode.
	//
	ADC_disableBurstMode(myADC2_BASE);
	//
	// Sets the priority mode of the SOCs.
	//
	ADC_setSOCPriority(myADC2_BASE, ADC_PRI_ALL_ROUND_ROBIN);
}


//*****************************************************************************
//
// AIO Configurations
//
//*****************************************************************************
void AIO_init(){
	myAIO0_init();
	myAIO1_init();
	myAIO2_init();
	myAIO3_init();
	myAIO4_init();
	myAIO5_init();
	myAIO6_init();
	myAIO7_init();
	myAIO8_init();
	myAIO9_init();
	myAIO10_init();
	myAIO11_init();
	myAIO12_init();
	myAIO13_init();
	myAIO14_init();
	myAIO15_init();
	myAIO16_init();
	myAIO17_init();
	myAIO18_init();
	myAIO19_init();
	myAIO20_init();
}

void myAIO0_init(){
	GPIO_setAnalogMode(myAIO0, GPIO_ANALOG_DISABLED);
	GPIO_setDirectionMode(myAIO0, GPIO_DIR_MODE_IN);
	GPIO_setPadConfig(myAIO0, GPIO_PIN_TYPE_STD);
	GPIO_setControllerCore(myAIO0, GPIO_CORE_CPU1);
	GPIO_setQualificationMode(myAIO0, GPIO_QUAL_SYNC);
}
void myAIO1_init(){
	GPIO_setAnalogMode(myAIO1, GPIO_ANALOG_DISABLED);
	GPIO_setDirectionMode(myAIO1, GPIO_DIR_MODE_IN);
	GPIO_setPadConfig(myAIO1, GPIO_PIN_TYPE_STD);
	GPIO_setControllerCore(myAIO1, GPIO_CORE_CPU1);
	GPIO_setQualificationMode(myAIO1, GPIO_QUAL_SYNC);
}
void myAIO2_init(){
	GPIO_setAnalogMode(myAIO2, GPIO_ANALOG_DISABLED);
	GPIO_setDirectionMode(myAIO2, GPIO_DIR_MODE_IN);
	GPIO_setPadConfig(myAIO2, GPIO_PIN_TYPE_STD);
	GPIO_setControllerCore(myAIO2, GPIO_CORE_CPU1);
	GPIO_setQualificationMode(myAIO2, GPIO_QUAL_SYNC);
}
void myAIO3_init(){
	GPIO_setAnalogMode(myAIO3, GPIO_ANALOG_DISABLED);
	GPIO_setDirectionMode(myAIO3, GPIO_DIR_MODE_IN);
	GPIO_setPadConfig(myAIO3, GPIO_PIN_TYPE_STD);
	GPIO_setControllerCore(myAIO3, GPIO_CORE_CPU1);
	GPIO_setQualificationMode(myAIO3, GPIO_QUAL_SYNC);
}
void myAIO4_init(){
	GPIO_setAnalogMode(myAIO4, GPIO_ANALOG_DISABLED);
	GPIO_setDirectionMode(myAIO4, GPIO_DIR_MODE_IN);
	GPIO_setPadConfig(myAIO4, GPIO_PIN_TYPE_STD);
	GPIO_setControllerCore(myAIO4, GPIO_CORE_CPU1);
	GPIO_setQualificationMode(myAIO4, GPIO_QUAL_SYNC);
}
void myAIO5_init(){
	GPIO_setAnalogMode(myAIO5, GPIO_ANALOG_DISABLED);
	GPIO_setDirectionMode(myAIO5, GPIO_DIR_MODE_IN);
	GPIO_setPadConfig(myAIO5, GPIO_PIN_TYPE_STD);
	GPIO_setControllerCore(myAIO5, GPIO_CORE_CPU1);
	GPIO_setQualificationMode(myAIO5, GPIO_QUAL_SYNC);
}
void myAIO6_init(){
	GPIO_setAnalogMode(myAIO6, GPIO_ANALOG_DISABLED);
	GPIO_setDirectionMode(myAIO6, GPIO_DIR_MODE_IN);
	GPIO_setPadConfig(myAIO6, GPIO_PIN_TYPE_STD);
	GPIO_setControllerCore(myAIO6, GPIO_CORE_CPU1);
	GPIO_setQualificationMode(myAIO6, GPIO_QUAL_SYNC);
}
void myAIO7_init(){
	GPIO_setAnalogMode(myAIO7, GPIO_ANALOG_DISABLED);
	GPIO_setDirectionMode(myAIO7, GPIO_DIR_MODE_IN);
	GPIO_setPadConfig(myAIO7, GPIO_PIN_TYPE_STD);
	GPIO_setControllerCore(myAIO7, GPIO_CORE_CPU1);
	GPIO_setQualificationMode(myAIO7, GPIO_QUAL_SYNC);
}
void myAIO8_init(){
	GPIO_setAnalogMode(myAIO8, GPIO_ANALOG_DISABLED);
	GPIO_setDirectionMode(myAIO8, GPIO_DIR_MODE_IN);
	GPIO_setPadConfig(myAIO8, GPIO_PIN_TYPE_STD);
	GPIO_setControllerCore(myAIO8, GPIO_CORE_CPU1);
	GPIO_setQualificationMode(myAIO8, GPIO_QUAL_SYNC);
}
void myAIO9_init(){
	GPIO_setAnalogMode(myAIO9, GPIO_ANALOG_DISABLED);
	GPIO_setDirectionMode(myAIO9, GPIO_DIR_MODE_IN);
	GPIO_setPadConfig(myAIO9, GPIO_PIN_TYPE_STD);
	GPIO_setControllerCore(myAIO9, GPIO_CORE_CPU1);
	GPIO_setQualificationMode(myAIO9, GPIO_QUAL_SYNC);
}
void myAIO10_init(){
	GPIO_setAnalogMode(myAIO10, GPIO_ANALOG_DISABLED);
	GPIO_setDirectionMode(myAIO10, GPIO_DIR_MODE_IN);
	GPIO_setPadConfig(myAIO10, GPIO_PIN_TYPE_STD);
	GPIO_setControllerCore(myAIO10, GPIO_CORE_CPU1);
	GPIO_setQualificationMode(myAIO10, GPIO_QUAL_SYNC);
}
void myAIO11_init(){
	GPIO_setAnalogMode(myAIO11, GPIO_ANALOG_DISABLED);
	GPIO_setDirectionMode(myAIO11, GPIO_DIR_MODE_IN);
	GPIO_setPadConfig(myAIO11, GPIO_PIN_TYPE_STD);
	GPIO_setControllerCore(myAIO11, GPIO_CORE_CPU1);
	GPIO_setQualificationMode(myAIO11, GPIO_QUAL_SYNC);
}
void myAIO12_init(){
	GPIO_setAnalogMode(myAIO12, GPIO_ANALOG_DISABLED);
	GPIO_setDirectionMode(myAIO12, GPIO_DIR_MODE_IN);
	GPIO_setPadConfig(myAIO12, GPIO_PIN_TYPE_STD);
	GPIO_setControllerCore(myAIO12, GPIO_CORE_CPU1);
	GPIO_setQualificationMode(myAIO12, GPIO_QUAL_SYNC);
}
void myAIO13_init(){
	GPIO_setAnalogMode(myAIO13, GPIO_ANALOG_DISABLED);
	GPIO_setDirectionMode(myAIO13, GPIO_DIR_MODE_IN);
	GPIO_setPadConfig(myAIO13, GPIO_PIN_TYPE_STD);
	GPIO_setControllerCore(myAIO13, GPIO_CORE_CPU1);
	GPIO_setQualificationMode(myAIO13, GPIO_QUAL_SYNC);
}
void myAIO14_init(){
	GPIO_setAnalogMode(myAIO14, GPIO_ANALOG_DISABLED);
	GPIO_setDirectionMode(myAIO14, GPIO_DIR_MODE_IN);
	GPIO_setPadConfig(myAIO14, GPIO_PIN_TYPE_STD);
	GPIO_setControllerCore(myAIO14, GPIO_CORE_CPU1);
	GPIO_setQualificationMode(myAIO14, GPIO_QUAL_SYNC);
}
void myAIO15_init(){
	GPIO_setAnalogMode(myAIO15, GPIO_ANALOG_DISABLED);
	GPIO_setDirectionMode(myAIO15, GPIO_DIR_MODE_IN);
	GPIO_setPadConfig(myAIO15, GPIO_PIN_TYPE_STD);
	GPIO_setControllerCore(myAIO15, GPIO_CORE_CPU1);
	GPIO_setQualificationMode(myAIO15, GPIO_QUAL_SYNC);
}
void myAIO16_init(){
	GPIO_setAnalogMode(myAIO16, GPIO_ANALOG_DISABLED);
	GPIO_setDirectionMode(myAIO16, GPIO_DIR_MODE_IN);
	GPIO_setPadConfig(myAIO16, GPIO_PIN_TYPE_STD);
	GPIO_setControllerCore(myAIO16, GPIO_CORE_CPU1);
	GPIO_setQualificationMode(myAIO16, GPIO_QUAL_SYNC);
}
void myAIO17_init(){
	GPIO_setAnalogMode(myAIO17, GPIO_ANALOG_DISABLED);
	GPIO_setDirectionMode(myAIO17, GPIO_DIR_MODE_IN);
	GPIO_setPadConfig(myAIO17, GPIO_PIN_TYPE_STD);
	GPIO_setControllerCore(myAIO17, GPIO_CORE_CPU1);
	GPIO_setQualificationMode(myAIO17, GPIO_QUAL_SYNC);
}
void myAIO18_init(){
	GPIO_setAnalogMode(myAIO18, GPIO_ANALOG_DISABLED);
	GPIO_setDirectionMode(myAIO18, GPIO_DIR_MODE_IN);
	GPIO_setPadConfig(myAIO18, GPIO_PIN_TYPE_STD);
	GPIO_setControllerCore(myAIO18, GPIO_CORE_CPU1);
	GPIO_setQualificationMode(myAIO18, GPIO_QUAL_SYNC);
}
void myAIO19_init(){
	GPIO_setAnalogMode(myAIO19, GPIO_ANALOG_DISABLED);
	GPIO_setDirectionMode(myAIO19, GPIO_DIR_MODE_IN);
	GPIO_setPadConfig(myAIO19, GPIO_PIN_TYPE_STD);
	GPIO_setControllerCore(myAIO19, GPIO_CORE_CPU1);
	GPIO_setQualificationMode(myAIO19, GPIO_QUAL_SYNC);
}
void myAIO20_init(){
	GPIO_setAnalogMode(myAIO20, GPIO_ANALOG_DISABLED);
	GPIO_setDirectionMode(myAIO20, GPIO_DIR_MODE_IN);
	GPIO_setPadConfig(myAIO20, GPIO_PIN_TYPE_STD);
	GPIO_setControllerCore(myAIO20, GPIO_CORE_CPU1);
	GPIO_setQualificationMode(myAIO20, GPIO_QUAL_SYNC);
}

//*****************************************************************************
//
// ASYSCTL Configurations
//
//*****************************************************************************
void ASYSCTL_init(){
	//
	// asysctl initialization
	//
	// Disables the temperature sensor output to the ADC.
	//
	ASysCtl_disableTemperatureSensor();
	//
	// Set the analog voltage reference selection to external.
	//
	ASysCtl_setAnalogReferenceExternal( ASYSCTL_VREFHIA | ASYSCTL_VREFHIB | ASYSCTL_VREFHIC );
}

//*****************************************************************************
//
// CAN Configurations
//
//*****************************************************************************
void CAN_init(){
	myCAN0_init();
}

void myCAN0_init(){
	CAN_initModule(myCAN0_BASE);
	//
	// Refer to the Driver Library User Guide for information on how to set
	// tighter timing control. Additionally, consult the device data sheet
	// for more information about the CAN module clocking.
	//
	CAN_setBitTiming(myCAN0_BASE, 7, 0, 15, 7, 3);
	//
	// Start CAN module operations
	//
	CAN_startModule(myCAN0_BASE);
}

//*****************************************************************************
//
// EPWM Configurations
//
//*****************************************************************************
void EPWM_init(){
    HRPWM_setClockPrescaler(myEPWM0_BASE, EPWM_CLOCK_DIVIDER_1, EPWM_HSCLOCK_DIVIDER_2);	
    EPWM_setTimeBasePeriod(myEPWM0_BASE, 0);	
    HRPWM_setTimeBaseCounter(myEPWM0_BASE, 0);	
    HRPWM_setTimeBaseCounterMode(myEPWM0_BASE, EPWM_COUNTER_MODE_STOP_FREEZE);	
    EPWM_disablePhaseShiftLoad(myEPWM0_BASE);
    EPWM_setPhaseShift(myEPWM0_BASE, 0);	
    EPWM_setCounterCompareValue(myEPWM0_BASE, EPWM_COUNTER_COMPARE_A, 0);	
    HRPWM_setCounterCompareShadowLoadMode(myEPWM0_BASE, EPWM_COUNTER_COMPARE_A, EPWM_COMP_LOAD_ON_CNTR_ZERO);	
    EPWM_setCounterCompareValue(myEPWM0_BASE, EPWM_COUNTER_COMPARE_B, 0);	
    HRPWM_setCounterCompareShadowLoadMode(myEPWM0_BASE, EPWM_COUNTER_COMPARE_B, EPWM_COMP_LOAD_ON_CNTR_ZERO);	
    HRPWM_disableActionQualifierShadowLoadMode(myEPWM0_BASE, EPWM_ACTION_QUALIFIER_A);	
    HRPWM_setActionQualifierShadowLoadMode(myEPWM0_BASE, EPWM_ACTION_QUALIFIER_A, EPWM_AQ_LOAD_ON_CNTR_ZERO);	
    HRPWM_setActionQualifierAction(myEPWM0_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_ZERO);	
    HRPWM_setActionQualifierAction(myEPWM0_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_PERIOD);	
    HRPWM_setActionQualifierAction(myEPWM0_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);	
    HRPWM_setActionQualifierAction(myEPWM0_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);	
    HRPWM_setActionQualifierAction(myEPWM0_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPB);	
    HRPWM_setActionQualifierAction(myEPWM0_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPB);	
    HRPWM_disableActionQualifierShadowLoadMode(myEPWM0_BASE, EPWM_ACTION_QUALIFIER_B);	
    HRPWM_setActionQualifierShadowLoadMode(myEPWM0_BASE, EPWM_ACTION_QUALIFIER_B, EPWM_AQ_LOAD_ON_CNTR_ZERO);	
    HRPWM_setActionQualifierAction(myEPWM0_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_ZERO);	
    HRPWM_setActionQualifierAction(myEPWM0_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_PERIOD);	
    HRPWM_setActionQualifierAction(myEPWM0_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);	
    HRPWM_setActionQualifierAction(myEPWM0_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);	
    HRPWM_setActionQualifierAction(myEPWM0_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPB);	
    HRPWM_setActionQualifierAction(myEPWM0_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPB);	
    HRPWM_setRisingEdgeDelayCountShadowLoadMode(myEPWM0_BASE, EPWM_RED_LOAD_ON_CNTR_ZERO);	
    HRPWM_disableRisingEdgeDelayCountShadowLoadMode(myEPWM0_BASE);	
    HRPWM_setFallingEdgeDelayCountShadowLoadMode(myEPWM0_BASE, EPWM_FED_LOAD_ON_CNTR_ZERO);	
    HRPWM_disableFallingEdgeDelayCountShadowLoadMode(myEPWM0_BASE);	
    HRPWM_enableAutoConversion(myEPWM0_BASE);	
    HRPWM_setClockPrescaler(myEPWM1_BASE, EPWM_CLOCK_DIVIDER_1, EPWM_HSCLOCK_DIVIDER_2);	
    EPWM_setTimeBasePeriod(myEPWM1_BASE, 0);	
    HRPWM_setTimeBaseCounter(myEPWM1_BASE, 0);	
    HRPWM_setTimeBaseCounterMode(myEPWM1_BASE, EPWM_COUNTER_MODE_STOP_FREEZE);	
    EPWM_disablePhaseShiftLoad(myEPWM1_BASE);
    EPWM_setPhaseShift(myEPWM1_BASE, 0);	
    EPWM_setCounterCompareValue(myEPWM1_BASE, EPWM_COUNTER_COMPARE_A, 0);	
    HRPWM_setCounterCompareShadowLoadMode(myEPWM1_BASE, EPWM_COUNTER_COMPARE_A, EPWM_COMP_LOAD_ON_CNTR_ZERO);	
    EPWM_setCounterCompareValue(myEPWM1_BASE, EPWM_COUNTER_COMPARE_B, 0);	
    HRPWM_setCounterCompareShadowLoadMode(myEPWM1_BASE, EPWM_COUNTER_COMPARE_B, EPWM_COMP_LOAD_ON_CNTR_ZERO);	
    HRPWM_disableActionQualifierShadowLoadMode(myEPWM1_BASE, EPWM_ACTION_QUALIFIER_A);	
    HRPWM_setActionQualifierShadowLoadMode(myEPWM1_BASE, EPWM_ACTION_QUALIFIER_A, EPWM_AQ_LOAD_ON_CNTR_ZERO);	
    HRPWM_setActionQualifierAction(myEPWM1_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_ZERO);	
    HRPWM_setActionQualifierAction(myEPWM1_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_PERIOD);	
    HRPWM_setActionQualifierAction(myEPWM1_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);	
    HRPWM_setActionQualifierAction(myEPWM1_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);	
    HRPWM_setActionQualifierAction(myEPWM1_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPB);	
    HRPWM_setActionQualifierAction(myEPWM1_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPB);	
    HRPWM_disableActionQualifierShadowLoadMode(myEPWM1_BASE, EPWM_ACTION_QUALIFIER_B);	
    HRPWM_setActionQualifierShadowLoadMode(myEPWM1_BASE, EPWM_ACTION_QUALIFIER_B, EPWM_AQ_LOAD_ON_CNTR_ZERO);	
    HRPWM_setActionQualifierAction(myEPWM1_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_ZERO);	
    HRPWM_setActionQualifierAction(myEPWM1_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_PERIOD);	
    HRPWM_setActionQualifierAction(myEPWM1_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);	
    HRPWM_setActionQualifierAction(myEPWM1_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);	
    HRPWM_setActionQualifierAction(myEPWM1_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPB);	
    HRPWM_setActionQualifierAction(myEPWM1_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPB);	
    HRPWM_setRisingEdgeDelayCountShadowLoadMode(myEPWM1_BASE, EPWM_RED_LOAD_ON_CNTR_ZERO);	
    HRPWM_disableRisingEdgeDelayCountShadowLoadMode(myEPWM1_BASE);	
    HRPWM_setFallingEdgeDelayCountShadowLoadMode(myEPWM1_BASE, EPWM_FED_LOAD_ON_CNTR_ZERO);	
    HRPWM_disableFallingEdgeDelayCountShadowLoadMode(myEPWM1_BASE);	
    HRPWM_enableAutoConversion(myEPWM1_BASE);	
    HRPWM_setClockPrescaler(myEPWM2_BASE, EPWM_CLOCK_DIVIDER_1, EPWM_HSCLOCK_DIVIDER_2);	
    EPWM_setTimeBasePeriod(myEPWM2_BASE, 0);	
    HRPWM_setTimeBaseCounter(myEPWM2_BASE, 0);	
    HRPWM_setTimeBaseCounterMode(myEPWM2_BASE, EPWM_COUNTER_MODE_STOP_FREEZE);	
    EPWM_disablePhaseShiftLoad(myEPWM2_BASE);
    EPWM_setPhaseShift(myEPWM2_BASE, 0);	
    EPWM_setCounterCompareValue(myEPWM2_BASE, EPWM_COUNTER_COMPARE_A, 0);	
    HRPWM_setCounterCompareShadowLoadMode(myEPWM2_BASE, EPWM_COUNTER_COMPARE_A, EPWM_COMP_LOAD_ON_CNTR_ZERO);	
    EPWM_setCounterCompareValue(myEPWM2_BASE, EPWM_COUNTER_COMPARE_B, 0);	
    HRPWM_setCounterCompareShadowLoadMode(myEPWM2_BASE, EPWM_COUNTER_COMPARE_B, EPWM_COMP_LOAD_ON_CNTR_ZERO);	
    HRPWM_disableActionQualifierShadowLoadMode(myEPWM2_BASE, EPWM_ACTION_QUALIFIER_A);	
    HRPWM_setActionQualifierShadowLoadMode(myEPWM2_BASE, EPWM_ACTION_QUALIFIER_A, EPWM_AQ_LOAD_ON_CNTR_ZERO);	
    HRPWM_setActionQualifierAction(myEPWM2_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_ZERO);	
    HRPWM_setActionQualifierAction(myEPWM2_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_PERIOD);	
    HRPWM_setActionQualifierAction(myEPWM2_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);	
    HRPWM_setActionQualifierAction(myEPWM2_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);	
    HRPWM_setActionQualifierAction(myEPWM2_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPB);	
    HRPWM_setActionQualifierAction(myEPWM2_BASE, EPWM_AQ_OUTPUT_A, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPB);	
    HRPWM_disableActionQualifierShadowLoadMode(myEPWM2_BASE, EPWM_ACTION_QUALIFIER_B);	
    HRPWM_setActionQualifierShadowLoadMode(myEPWM2_BASE, EPWM_ACTION_QUALIFIER_B, EPWM_AQ_LOAD_ON_CNTR_ZERO);	
    HRPWM_setActionQualifierAction(myEPWM2_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_ZERO);	
    HRPWM_setActionQualifierAction(myEPWM2_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_PERIOD);	
    HRPWM_setActionQualifierAction(myEPWM2_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPA);	
    HRPWM_setActionQualifierAction(myEPWM2_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPA);	
    HRPWM_setActionQualifierAction(myEPWM2_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_UP_CMPB);	
    HRPWM_setActionQualifierAction(myEPWM2_BASE, EPWM_AQ_OUTPUT_B, EPWM_AQ_OUTPUT_NO_CHANGE, EPWM_AQ_OUTPUT_ON_TIMEBASE_DOWN_CMPB);	
    HRPWM_setRisingEdgeDelayCountShadowLoadMode(myEPWM2_BASE, EPWM_RED_LOAD_ON_CNTR_ZERO);	
    HRPWM_disableRisingEdgeDelayCountShadowLoadMode(myEPWM2_BASE);	
    HRPWM_setFallingEdgeDelayCountShadowLoadMode(myEPWM2_BASE, EPWM_FED_LOAD_ON_CNTR_ZERO);	
    HRPWM_disableFallingEdgeDelayCountShadowLoadMode(myEPWM2_BASE);	
    HRPWM_enableAutoConversion(myEPWM2_BASE);	
}

//*****************************************************************************
//
// I2C Configurations
//
//*****************************************************************************
void I2C_init(){
	myI2C0_init();
}

void myI2C0_init(){
	I2C_disableModule(myI2C0_BASE);
	I2C_initController(myI2C0_BASE, DEVICE_SYSCLK_FREQ, myI2C0_BITRATE, I2C_DUTYCYCLE_33);
	I2C_setConfig(myI2C0_BASE, I2C_CONTROLLER_SEND_MODE);
	I2C_disableLoopback(myI2C0_BASE);
	I2C_setOwnAddress(myI2C0_BASE, myI2C0_OWN_ADDRESS);
	I2C_setTargetAddress(myI2C0_BASE, myI2C0_TARGET_ADDRESS);
	I2C_setBitCount(myI2C0_BASE, I2C_BITCOUNT_1);
	I2C_setDataCount(myI2C0_BASE, 1);
	I2C_setAddressMode(myI2C0_BASE, I2C_ADDR_MODE_7BITS);
	I2C_enableFIFO(myI2C0_BASE);
	I2C_setFIFOInterruptLevel(myI2C0_BASE, I2C_FIFO_TXEMPTY, I2C_FIFO_RXEMPTY);
	I2C_setEmulationMode(myI2C0_BASE, I2C_EMULATION_STOP_SCL_LOW);
	I2C_enableModule(myI2C0_BASE);
}

//*****************************************************************************
//
// PGA Configurations
//
//*****************************************************************************
void PGA_init(){
	myPGA0_init();
	myPGA1_init();
	myPGA2_init();
	myPGA3_init();
	myPGA4_init();
	myPGA5_init();
	myPGA6_init();
}

void myPGA0_init(){
    PGA_setGain(myPGA0_BASE, PGA_GAIN_3);
    PGA_setFilterResistor(myPGA0_BASE, PGA_LOW_PASS_FILTER_DISABLED);
    PGA_disable(myPGA0_BASE);    
    //
    // Delay for PGA to power up.
    //
	DEVICE_DELAY_US(500);
}
void myPGA1_init(){
    PGA_setGain(myPGA1_BASE, PGA_GAIN_3);
    PGA_setFilterResistor(myPGA1_BASE, PGA_LOW_PASS_FILTER_DISABLED);
    PGA_disable(myPGA1_BASE);    
    //
    // Delay for PGA to power up.
    //
	DEVICE_DELAY_US(500);
}
void myPGA2_init(){
    PGA_setGain(myPGA2_BASE, PGA_GAIN_3);
    PGA_setFilterResistor(myPGA2_BASE, PGA_LOW_PASS_FILTER_DISABLED);
    PGA_disable(myPGA2_BASE);    
    //
    // Delay for PGA to power up.
    //
	DEVICE_DELAY_US(500);
}
void myPGA3_init(){
    PGA_setGain(myPGA3_BASE, PGA_GAIN_3);
    PGA_setFilterResistor(myPGA3_BASE, PGA_LOW_PASS_FILTER_DISABLED);
    PGA_disable(myPGA3_BASE);    
    //
    // Delay for PGA to power up.
    //
	DEVICE_DELAY_US(500);
}
void myPGA4_init(){
    PGA_setGain(myPGA4_BASE, PGA_GAIN_3);
    PGA_setFilterResistor(myPGA4_BASE, PGA_LOW_PASS_FILTER_DISABLED);
    PGA_disable(myPGA4_BASE);    
    //
    // Delay for PGA to power up.
    //
	DEVICE_DELAY_US(500);
}
void myPGA5_init(){
    PGA_setGain(myPGA5_BASE, PGA_GAIN_3);
    PGA_setFilterResistor(myPGA5_BASE, PGA_LOW_PASS_FILTER_DISABLED);
    PGA_disable(myPGA5_BASE);    
    //
    // Delay for PGA to power up.
    //
	DEVICE_DELAY_US(500);
}
void myPGA6_init(){
    PGA_setGain(myPGA6_BASE, PGA_GAIN_3);
    PGA_setFilterResistor(myPGA6_BASE, PGA_LOW_PASS_FILTER_DISABLED);
    PGA_disable(myPGA6_BASE);    
    //
    // Delay for PGA to power up.
    //
	DEVICE_DELAY_US(500);
}

//*****************************************************************************
//
// SCI Configurations
//
//*****************************************************************************
void SCI_init(){
	mySCI0_init();
}

void mySCI0_init(){
	SCI_clearInterruptStatus(mySCI0_BASE, SCI_INT_RXFF | SCI_INT_TXFF | SCI_INT_FE | SCI_INT_OE | SCI_INT_PE | SCI_INT_RXERR | SCI_INT_RXRDY_BRKDT | SCI_INT_TXRDY);
	SCI_clearOverflowStatus(mySCI0_BASE);
	SCI_resetTxFIFO(mySCI0_BASE);
	SCI_resetRxFIFO(mySCI0_BASE);
	SCI_resetChannels(mySCI0_BASE);
	SCI_setConfig(mySCI0_BASE, DEVICE_LSPCLK_FREQ, mySCI0_BAUDRATE, (SCI_CONFIG_WLEN_8|SCI_CONFIG_STOP_ONE|SCI_CONFIG_PAR_NONE));
	SCI_disableLoopback(mySCI0_BASE);
	SCI_performSoftwareReset(mySCI0_BASE);
	SCI_setFIFOInterruptLevel(mySCI0_BASE, SCI_FIFO_TX0, SCI_FIFO_RX0);
	SCI_enableFIFO(mySCI0_BASE);
	SCI_enableModule(mySCI0_BASE);
}

//*****************************************************************************
//
// SPI Configurations
//
//*****************************************************************************
void SPI_init(){
	mySPI0_init();
}

void mySPI0_init(){
	SPI_disableModule(mySPI0_BASE);
	SPI_setConfig(mySPI0_BASE, DEVICE_LSPCLK_FREQ, SPI_PROT_POL0PHA0,
				  SPI_MODE_PERIPHERAL, mySPI0_BITRATE, mySPI0_DATAWIDTH);
	SPI_setPTESignalPolarity(mySPI0_BASE, SPI_PTE_ACTIVE_LOW);
	SPI_enableFIFO(mySPI0_BASE);
	SPI_setFIFOInterruptLevel(mySPI0_BASE, SPI_FIFO_TXEMPTY, SPI_FIFO_RXEMPTY);
	SPI_disableLoopback(mySPI0_BASE);
	SPI_setEmulationMode(mySPI0_BASE, SPI_EMULATION_STOP_MIDWAY);
	SPI_enableModule(mySPI0_BASE);
}

//*****************************************************************************
//
// SYNC Scheme Configurations
//
//*****************************************************************************
void SYNC_init(){
	SysCtl_setSyncOutputConfig(SYSCTL_SYNC_OUT_SRC_EPWM1SYNCOUT);
	//
	// For EPWM1, the sync input is: SYSCTL_SYNC_IN_SRC_EXTSYNCIN1
	//
	SysCtl_setSyncInputConfig(SYSCTL_SYNC_IN_EPWM4, SYSCTL_SYNC_IN_SRC_EPWM1SYNCOUT);
	SysCtl_setSyncInputConfig(SYSCTL_SYNC_IN_EPWM7, SYSCTL_SYNC_IN_SRC_EPWM1SYNCOUT);
	SysCtl_setSyncInputConfig(SYSCTL_SYNC_IN_ECAP1, SYSCTL_SYNC_IN_SRC_EPWM1SYNCOUT);
	SysCtl_setSyncInputConfig(SYSCTL_SYNC_IN_ECAP4, SYSCTL_SYNC_IN_SRC_EPWM1SYNCOUT);
	SysCtl_setSyncInputConfig(SYSCTL_SYNC_IN_ECAP6, SYSCTL_SYNC_IN_SRC_EPWM1SYNCOUT);
	//
	// SOCA
	//
	SysCtl_enableExtADCSOCSource(0);
	//
	// SOCB
	//
	SysCtl_enableExtADCSOCSource(0);
}
//
// SYSCTL_init is generated in a separate file.
//

