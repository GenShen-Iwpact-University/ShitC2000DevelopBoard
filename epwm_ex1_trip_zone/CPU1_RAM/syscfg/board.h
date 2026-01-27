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

#ifndef BOARD_H
#define BOARD_H

//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplus
extern "C"
{
#endif

//
// Included Files
//

#include "driverlib.h"
#include "device.h"

//*****************************************************************************
//
// PinMux Configurations
//
//*****************************************************************************
//
// AIO246 - GPIO Settings
//
#define GPIO_PIN_AIO246 246
#define myAIO0_AIO_PIN_CONFIG GPIO_246_GPIO246
//
// AIO241 - GPIO Settings
//
#define GPIO_PIN_AIO241 241
#define myAIO1_AIO_PIN_CONFIG GPIO_241_GPIO241
//
// AIO230 - GPIO Settings
//
#define GPIO_PIN_AIO230 230
#define myAIO2_AIO_PIN_CONFIG GPIO_230_GPIO230
//
// AIO227 - GPIO Settings
//
#define GPIO_PIN_AIO227 227
#define myAIO3_AIO_PIN_CONFIG GPIO_227_GPIO227
//
// AIO236 - GPIO Settings
//
#define GPIO_PIN_AIO236 236
#define myAIO4_AIO_PIN_CONFIG GPIO_236_GPIO236
//
// AIO229 - GPIO Settings
//
#define GPIO_PIN_AIO229 229
#define myAIO5_AIO_PIN_CONFIG GPIO_229_GPIO229
//
// AIO225 - GPIO Settings
//
#define GPIO_PIN_AIO225 225
#define myAIO6_AIO_PIN_CONFIG GPIO_225_GPIO225
//
// AIO234 - GPIO Settings
//
#define GPIO_PIN_AIO234 234
#define myAIO7_AIO_PIN_CONFIG GPIO_234_GPIO234
//
// AIO245 - GPIO Settings
//
#define GPIO_PIN_AIO245 245
#define myAIO8_AIO_PIN_CONFIG GPIO_245_GPIO245
//
// AIO238 - GPIO Settings
//
#define GPIO_PIN_AIO238 238
#define myAIO9_AIO_PIN_CONFIG GPIO_238_GPIO238
//
// AIO240 - GPIO Settings
//
#define GPIO_PIN_AIO240 240
#define myAIO10_AIO_PIN_CONFIG GPIO_240_GPIO240
//
// AIO231 - GPIO Settings
//
#define GPIO_PIN_AIO231 231
#define myAIO11_AIO_PIN_CONFIG GPIO_231_GPIO231
//
// AIO232 - GPIO Settings
//
#define GPIO_PIN_AIO232 232
#define myAIO12_AIO_PIN_CONFIG GPIO_232_GPIO232
//
// AIO244 - GPIO Settings
//
#define GPIO_PIN_AIO244 244
#define myAIO13_AIO_PIN_CONFIG GPIO_244_GPIO244
//
// AIO237 - GPIO Settings
//
#define GPIO_PIN_AIO237 237
#define myAIO14_AIO_PIN_CONFIG GPIO_237_GPIO237
//
// AIO239 - GPIO Settings
//
#define GPIO_PIN_AIO239 239
#define myAIO15_AIO_PIN_CONFIG GPIO_239_GPIO239
//
// AIO233 - GPIO Settings
//
#define GPIO_PIN_AIO233 233
#define myAIO16_AIO_PIN_CONFIG GPIO_233_GPIO233
//
// AIO224 - GPIO Settings
//
#define GPIO_PIN_AIO224 224
#define myAIO17_AIO_PIN_CONFIG GPIO_224_GPIO224
//
// AIO242 - GPIO Settings
//
#define GPIO_PIN_AIO242 242
#define myAIO18_AIO_PIN_CONFIG GPIO_242_GPIO242
//
// AIO226 - GPIO Settings
//
#define GPIO_PIN_AIO226 226
#define myAIO19_AIO_PIN_CONFIG GPIO_226_GPIO226
//
// AIO228 - GPIO Settings
//
#define GPIO_PIN_AIO228 228
#define myAIO20_AIO_PIN_CONFIG GPIO_228_GPIO228

//
// CANB -> myCAN0 Pinmux
//
//
// CANB_RX - GPIO Settings
//
#define GPIO_PIN_CANB_RX 17
#define myCAN0_CANRX_GPIO 17
#define myCAN0_CANRX_PIN_CONFIG GPIO_17_CANB_RX
//
// CANB_TX - GPIO Settings
//
#define GPIO_PIN_CANB_TX 12
#define myCAN0_CANTX_GPIO 12
#define myCAN0_CANTX_PIN_CONFIG GPIO_12_CANB_TX

//
// EPWM7 -> myEPWM0 Pinmux
//
//
// EPWM7_A - GPIO Settings
//
#define GPIO_PIN_EPWM7_A 28
#define myEPWM0_EPWMA_GPIO 28
#define myEPWM0_EPWMA_PIN_CONFIG GPIO_28_EPWM7_A
//
// EPWM7_B - GPIO Settings
//
#define GPIO_PIN_EPWM7_B 13
#define myEPWM0_EPWMB_GPIO 13
#define myEPWM0_EPWMB_PIN_CONFIG GPIO_13_EPWM7_B

//
// EPWM4 -> myEPWM1 Pinmux
//
//
// EPWM4_A - GPIO Settings
//
#define GPIO_PIN_EPWM4_A 6
#define myEPWM1_EPWMA_GPIO 6
#define myEPWM1_EPWMA_PIN_CONFIG GPIO_6_EPWM4_A
//
// EPWM4_B - GPIO Settings
//
#define GPIO_PIN_EPWM4_B 7
#define myEPWM1_EPWMB_GPIO 7
#define myEPWM1_EPWMB_PIN_CONFIG GPIO_7_EPWM4_B

//
// EPWM2 -> myEPWM2 Pinmux
//
//
// EPWM2_A - GPIO Settings
//
#define GPIO_PIN_EPWM2_A 2
#define myEPWM2_EPWMA_GPIO 2
#define myEPWM2_EPWMA_PIN_CONFIG GPIO_2_EPWM2_A
//
// EPWM2_B - GPIO Settings
//
#define GPIO_PIN_EPWM2_B 3
#define myEPWM2_EPWMB_GPIO 3
#define myEPWM2_EPWMB_PIN_CONFIG GPIO_3_EPWM2_B

//
// I2CA -> myI2C0 Pinmux
//
//
// I2CA_SDA - GPIO Settings
//
#define GPIO_PIN_I2CA_SDA 0
#define myI2C0_I2CSDA_GPIO 0
#define myI2C0_I2CSDA_PIN_CONFIG GPIO_0_I2CA_SDA
//
// I2CA_SCL - GPIO Settings
//
#define GPIO_PIN_I2CA_SCL 1
#define myI2C0_I2CSCL_GPIO 1
#define myI2C0_I2CSCL_PIN_CONFIG GPIO_1_I2CA_SCL

//
// SCIB -> mySCI0 Pinmux
//
//
// SCIB_RX - GPIO Settings
//
#define GPIO_PIN_SCIB_RX 11
#define mySCI0_SCIRX_GPIO 11
#define mySCI0_SCIRX_PIN_CONFIG GPIO_11_SCIB_RX
//
// SCIB_TX - GPIO Settings
//
#define GPIO_PIN_SCIB_TX 56
#define mySCI0_SCITX_GPIO 56
#define mySCI0_SCITX_PIN_CONFIG GPIO_56_SCIB_TX

//
// SPIA -> mySPI0 Pinmux
//
//
// SPIA_PICO - GPIO Settings
//
#define GPIO_PIN_SPIA_PICO 16
#define mySPI0_SPIPICO_GPIO 16
#define mySPI0_SPIPICO_PIN_CONFIG GPIO_16_SPIA_SIMO
//
// SPIA_POCI - GPIO Settings
//
#define GPIO_PIN_SPIA_POCI 10
#define mySPI0_SPIPOCI_GPIO 10
#define mySPI0_SPIPOCI_PIN_CONFIG GPIO_10_SPIA_SOMI
//
// SPIA_CLK - GPIO Settings
//
#define GPIO_PIN_SPIA_CLK 9
#define mySPI0_SPICLK_GPIO 9
#define mySPI0_SPICLK_PIN_CONFIG GPIO_9_SPIA_CLK
//
// SPIA_PTE - GPIO Settings
//
#define GPIO_PIN_SPIA_PTE 5
#define mySPI0_SPIPTE_GPIO 5
#define mySPI0_SPIPTE_PIN_CONFIG GPIO_5_SPIA_STE

//*****************************************************************************
//
// ADC Configurations
//
//*****************************************************************************
#define myADC0_BASE ADCA_BASE
#define myADC0_RESULT_BASE ADCARESULT_BASE
void myADC0_init();

#define myADC1_BASE ADCB_BASE
#define myADC1_RESULT_BASE ADCBRESULT_BASE
void myADC1_init();

#define myADC2_BASE ADCC_BASE
#define myADC2_RESULT_BASE ADCCRESULT_BASE
void myADC2_init();


//*****************************************************************************
//
// AIO Configurations
//
//*****************************************************************************
#define myAIO0 246
void myAIO0_init();
#define myAIO1 241
void myAIO1_init();
#define myAIO2 230
void myAIO2_init();
#define myAIO3 227
void myAIO3_init();
#define myAIO4 236
void myAIO4_init();
#define myAIO5 229
void myAIO5_init();
#define myAIO6 225
void myAIO6_init();
#define myAIO7 234
void myAIO7_init();
#define myAIO8 245
void myAIO8_init();
#define myAIO9 238
void myAIO9_init();
#define myAIO10 240
void myAIO10_init();
#define myAIO11 231
void myAIO11_init();
#define myAIO12 232
void myAIO12_init();
#define myAIO13 244
void myAIO13_init();
#define myAIO14 237
void myAIO14_init();
#define myAIO15 239
void myAIO15_init();
#define myAIO16 233
void myAIO16_init();
#define myAIO17 224
void myAIO17_init();
#define myAIO18 242
void myAIO18_init();
#define myAIO19 226
void myAIO19_init();
#define myAIO20 228
void myAIO20_init();

//*****************************************************************************
//
// ASYSCTL Configurations
//
//*****************************************************************************

//*****************************************************************************
//
// CAN Configurations
//
//*****************************************************************************
#define myCAN0_BASE CANB_BASE

void myCAN0_init();


//*****************************************************************************
//
// EPWM Configurations
//
//*****************************************************************************
#define myEPWM0_BASE EPWM7_BASE
#define myEPWM0_TBPRD 0
#define myEPWM0_COUNTER_MODE EPWM_COUNTER_MODE_STOP_FREEZE
#define myEPWM0_TBPHS 0
#define myEPWM0_CMPA 0
#define myEPWM0_CMPB 0
#define myEPWM0_CMPC 0
#define myEPWM0_CMPD 0
#define myEPWM0_DBRED 0
#define myEPWM0_DBFED 0
#define myEPWM0_TZA_ACTION EPWM_TZ_ACTION_HIGH_Z
#define myEPWM0_TZB_ACTION EPWM_TZ_ACTION_HIGH_Z
#define myEPWM0_INTERRUPT_SOURCE EPWM_INT_TBCTR_DISABLED
#define myEPWM1_BASE EPWM4_BASE
#define myEPWM1_TBPRD 0
#define myEPWM1_COUNTER_MODE EPWM_COUNTER_MODE_STOP_FREEZE
#define myEPWM1_TBPHS 0
#define myEPWM1_CMPA 0
#define myEPWM1_CMPB 0
#define myEPWM1_CMPC 0
#define myEPWM1_CMPD 0
#define myEPWM1_DBRED 0
#define myEPWM1_DBFED 0
#define myEPWM1_TZA_ACTION EPWM_TZ_ACTION_HIGH_Z
#define myEPWM1_TZB_ACTION EPWM_TZ_ACTION_HIGH_Z
#define myEPWM1_INTERRUPT_SOURCE EPWM_INT_TBCTR_DISABLED
#define myEPWM2_BASE EPWM2_BASE
#define myEPWM2_TBPRD 0
#define myEPWM2_COUNTER_MODE EPWM_COUNTER_MODE_STOP_FREEZE
#define myEPWM2_TBPHS 0
#define myEPWM2_CMPA 0
#define myEPWM2_CMPB 0
#define myEPWM2_CMPC 0
#define myEPWM2_CMPD 0
#define myEPWM2_DBRED 0
#define myEPWM2_DBFED 0
#define myEPWM2_TZA_ACTION EPWM_TZ_ACTION_HIGH_Z
#define myEPWM2_TZB_ACTION EPWM_TZ_ACTION_HIGH_Z
#define myEPWM2_INTERRUPT_SOURCE EPWM_INT_TBCTR_DISABLED

//*****************************************************************************
//
// I2C Configurations
//
//*****************************************************************************
#define myI2C0_BASE I2CA_BASE
#define myI2C0_BITRATE 400000
#define myI2C0_TARGET_ADDRESS 0
#define myI2C0_OWN_ADDRESS 0
#define myI2C0_MODULE_CLOCK_FREQUENCY 10000000
void myI2C0_init();

//*****************************************************************************
//
// PGA Configurations
//
//*****************************************************************************
#define myPGA0_BASE PGA1_BASE
#define myPGA0_GAIN PGA_GAIN_3
#define myPGA0_FILTER PGA_LOW_PASS_FILTER_DISABLED
void myPGA0_init();
#define myPGA1_BASE PGA2_BASE
#define myPGA1_GAIN PGA_GAIN_3
#define myPGA1_FILTER PGA_LOW_PASS_FILTER_DISABLED
void myPGA1_init();
#define myPGA2_BASE PGA3_BASE
#define myPGA2_GAIN PGA_GAIN_3
#define myPGA2_FILTER PGA_LOW_PASS_FILTER_DISABLED
void myPGA2_init();
#define myPGA3_BASE PGA4_BASE
#define myPGA3_GAIN PGA_GAIN_3
#define myPGA3_FILTER PGA_LOW_PASS_FILTER_DISABLED
void myPGA3_init();
#define myPGA4_BASE PGA5_BASE
#define myPGA4_GAIN PGA_GAIN_3
#define myPGA4_FILTER PGA_LOW_PASS_FILTER_DISABLED
void myPGA4_init();
#define myPGA5_BASE PGA6_BASE
#define myPGA5_GAIN PGA_GAIN_3
#define myPGA5_FILTER PGA_LOW_PASS_FILTER_DISABLED
void myPGA5_init();
#define myPGA6_BASE PGA7_BASE
#define myPGA6_GAIN PGA_GAIN_3
#define myPGA6_FILTER PGA_LOW_PASS_FILTER_DISABLED
void myPGA6_init();

//*****************************************************************************
//
// SCI Configurations
//
//*****************************************************************************
#define mySCI0_BASE SCIB_BASE
#define mySCI0_BAUDRATE 115200
#define mySCI0_CONFIG_WLEN SCI_CONFIG_WLEN_8
#define mySCI0_CONFIG_STOP SCI_CONFIG_STOP_ONE
#define mySCI0_CONFIG_PAR SCI_CONFIG_PAR_NONE
#define mySCI0_FIFO_TX_LVL SCI_FIFO_TX0
#define mySCI0_FIFO_RX_LVL SCI_FIFO_RX0
void mySCI0_init();

//*****************************************************************************
//
// SPI Configurations
//
//*****************************************************************************
#define mySPI0_BASE SPIA_BASE
#define mySPI0_BITRATE 1000000
#define mySPI0_DATAWIDTH 16
void mySPI0_init();

//*****************************************************************************
//
// SYNC Scheme Configurations
//
//*****************************************************************************

//*****************************************************************************
//
// SYSCTL Configurations
//
//*****************************************************************************

//*****************************************************************************
//
// Board Configurations
//
//*****************************************************************************
void	Board_init();
void	ADC_init();
void	AIO_init();
void	ASYSCTL_init();
void	CAN_init();
void	EPWM_init();
void	I2C_init();
void	PGA_init();
void	SCI_init();
void	SPI_init();
void	SYNC_init();
void	SYSCTL_init();
void	PinMux_init();

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif  // end of BOARD_H definition
