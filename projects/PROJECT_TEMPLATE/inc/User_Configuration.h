/*******************************************************************************
 * User_Configuration.h
 * 
 * Author: La BlueFrog, 2015
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 *************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USER_CONF_H
#define __USER_CONF_H



// ============================================================================
//    OLED presence
// ============================================================================

// Comment out next line if no OLED or not used. Uncomment if OLED is used :
// #define USE_OLED  
   // WARNING:
   // - do not keep uncommented if no OLED present
   // - this initializes OLED but powering on/off the screen is left to user 
   //   code, using e.g. functions OLED_Switch_ON() and OLED_Switch_OFF()



// ============================================================================
//    Enable/Disable BlueTooth Low-Energy Functionality
// ============================================================================

// Comment out / Uncomment next line as needed :
// #define ENABLE_BTLE

// Select here the required code to download in the BTLE module 
// Must be stored on the Data Flash - Would typically be put there 
// by USB 
// Ignored if ENABLE_BTLE is undefined
#define  BTLE_CODE_FILENAME   "BTLECODE.BIN"

// indicate here required baudrate in bits/s
// This is for exchanges between STM32 and application running on PAN1740
// Does NOT affect baud rate used for booting PAN1740 from UART (which must not be changed)
// Ignored if BTLE is not enabled
#define	UART1_BAUDRATE	 115200  	



// ============================================================================
// CONNECTOR POSITIONS 1 to 3  
//	Optionally usable as SPI1 or GPIO or ....
//      ( it's exclusive, make sure you have ONE single define uncommented )
// ============================================================================

// ---------------------------------------------------------------------
//    SPI1 Usage on External Connector pos. 1 to 3
// ---------------------------------------------------------------------

// TODO

// -------------------------------------------------
//    Simple GPIO Usage on External Connector pos. 1 to 3
// -------------------------------------------------

// Pos.1:  Comment out / Uncomment ONE of following lines if needed
//
#define POS1_IS_GPIO_IN	// Pin used as input     
// #define POS1_IS_GPIO_IN_PU	// Pin used as input with weak pull-up 
// #define POS1_IS_GPIO_IN_PD	// Pin used as input with weak pull-down
// #define POS1_IS_GPIO_OUT	// Pin used as regular CMOS ouput
// #define POS1_IS_GPIO_OUT_OD  // Pin used as open-drain output

// Pos.2:  Comment out / Uncomment ONE of following lines if needed
//
#define POS2_IS_GPIO_IN	// Pin used as input     
// #define POS2_IS_GPIO_IN_PU	// Pin used as input with weak pull-up 
// #define POS2_IS_GPIO_IN_PD	// Pin used as input with weak pull-down
// #define POS2_IS_GPIO_OUT	// Pin used as regular CMOS ouput
// #define POS2_IS_GPIO_OUT_OD  // Pin used as open-drain output

// Pos.3:  Comment out / Uncomment ONE of following lines if needed
//
#define POS3_IS_GPIO_IN	// Pin used as input     
// #define POS3_IS_GPIO_IN_PU	// Pin used as input with weak pull-up 
//#define POS3_IS_GPIO_IN_PD	// Pin used as input with weak pull-down
// #define POS3_IS_GPIO_OUT	// Pin used as regular CMOS ouput
// #define POS3_IS_GPIO_OUT_OD  // Pin used as open-drain output


// ============================================================================
// CONNECTOR POSITIONS 4 :     
//	Bears Microphone output - Also goes to STM32 PB0 used as analog input 
// ============================================================================



// ============================================================================
// CONNECTOR POSITIONS 5 and 6 :   
//	Optionally usable as either UART3 or GPIO or ...
//      ( it's exclusive, make sure you have ONE single define uncommented )
// ============================================================================

// ---------------------------------------------------------------------
//    UART3 Usage on External Connector pos. 5 and 6
// ---------------------------------------------------------------------

// Comment out / Uncomment each of next 2 lines as needed :
//
// #define POS5_IS_UART3_TX 	//defined means Position 5 bears USART3 Tx
// #define POS6_IS_UART3_RX 	//defined means Position 6 bears USART3 Rx


// Assign required values (no effect if no pin enables as UART3 above) :
//
#define	UART3_BAUDRATE	 57600	// indicate here required baudrate in bits/s

// Other UART parameters default to :
//   8 bit data, 1 Stop bit, no Parity bit ...
// Tune code if you need something different


// ---------------------------------------------------------------------
//    Simple GPIO Usage on External Connector pos. 5 and 6
// ---------------------------------------------------------------------

// Pos.5:  Comment out / Uncomment ONE of following lines if needed
//
#define POS5_IS_GPIO_IN	// Pin used as input     
// #define POS5_IS_GPIO_IN_PU	// Pin used as input with weak pull-up 
// #define POS5_IS_GPIO_IN_PD	// Pin used as input with weak pull-down
// define POS5_IS_GPIO_OUT	// Pin used as regular CMOS ouput
// #define POS5_IS_GPIO_OUT_OD  // Pin used as open-drain output

// Pos.6:  Comment out / Uncomment ONE of following lines if needed
//
#define POS6_IS_GPIO_IN	// Pin used as input     
// #define POS6_IS_GPIO_IN_PU	// Pin used as input with weak pull-up 
// #define POS6_IS_GPIO_IN_PD	// Pin used as input with weak pull-down
// #define POS6_IS_GPIO_OUT	// Pin used as regular CMOS ouput
// #define POS6_IS_GPIO_OUT_OD  // Pin used as open-drain output



// ============================================================================
// CONNECTOR POSITION 7 :   
//	Optionally usable as GPIO or ...
//      ( it's exclusive, make sure you have ONE single define uncommented )
// ============================================================================



// ============================================================================
// CONNECTOR POSITION 8 is VDD  (3V)
// ============================================================================



// ============================================================================
// CONNECTOR POSITIONS 9 and 10 :   
//	Optionally usable as I2C1 or PWM (Timer4, Channels 3 and 4)  or GPIO or ...
//      ( it's exclusive, make sure you have ONE single define uncommented )
// ============================================================================


// ---------------------------------------------------------------------
//    I2C1 Usage on External Connector pos. 9 and 10
// ---------------------------------------------------------------------

// Comment out / Uncomment each of next 2 lines as needed :
//
// #define POS9_IS_I2C1_SCL 	//defined means Position 9 bears I2C1 SCL
// #define POS10_IS_I2C1_SDA 	//defined means Position 10 bears I2C1_SDA


// Assign required values (no effect if no pin enables as UART3 above) :
//
#define	I2C1_SPEED	100000	// indicate here required I2C clock speed in Hz

// Other I2C1 parameters default to :
//   7-bit addressing mode, dual address disabled, general call disabled
// Tune code if you need something different


// ---------------------------------------------------------------------
//    PWM Usage on External Connector pos. 9 and 10  --> from TIM4 Ch.3 and 4
// ---------------------------------------------------------------------

// Note:  different channels of same timer can have different duty cycles 
//        but share same period

// Comment out / Uncomment each of next lines as needed :
//
// #define POS9_IS_PWM_TIM4_CH3   //defined means Position 9 bears PWM generated by Channel 3 of Timer 4
// #define POS10_IS_PWM_TIM4_CH4  //defined means Position 10 bears PWM generated by Channel 4 of Timer 4


// ---------------------------------------------------------------------
//    Simple GPIO Usage on External Connector pos. 9 and 10
// ---------------------------------------------------------------------

// Pos.9:  Comment out / Uncomment ONE of following lines if needed
//
#define POS9_IS_GPIO_IN	// Pin used as input     
// #define POS9_IS_GPIO_IN_PU	// Pin used as input with weak pull-up 
// #define POS9_IS_GPIO_IN_PD	// Pin used as input with weak pull-down
// #define POS9_IS_GPIO_OUT	// Pin used as regular CMOS ouput
// #define POS9_IS_GPIO_OUT_OD  // Pin used as open-drain output

// Pos.10:  Comment out / Uncomment ONE of following lines if needed
//
#define POS10_IS_GPIO_IN	// Pin used as input     
// #define POS10_IS_GPIO_IN_PU	// Pin used as input with weak pull-up 
// #define POS10_IS_GPIO_IN_PD	// Pin used as input with weak pull-down
// #define POS10_IS_GPIO_OUT	// Pin used as regular CMOS ouput
// #define POS10_IS_GPIO_OUT_OD  // Pin used as open-drain output



// ============================================================================
// CONNECTOR POSITIONS 11 is GND
// ============================================================================




#endif  /*__USER_CONF_H*/

/***************************************************************END OF FILE****/

