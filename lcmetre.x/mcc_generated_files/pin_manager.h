/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.26
        Device            :  PIC16F1618
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA2 procedures
#define RA2_SetHigh()    do { LATAbits.LATA2 = 1; } while(0)
#define RA2_SetLow()   do { LATAbits.LATA2 = 0; } while(0)
#define RA2_Toggle()   do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_GetValue()         PORTAbits.RA2
#define RA2_SetDigitalInput()   do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_SetDigitalOutput()  do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_SetPullup()     do { WPUAbits.WPUA2 = 1; } while(0)
#define RA2_ResetPullup()   do { WPUAbits.WPUA2 = 0; } while(0)
#define RA2_SetAnalogMode() do { ANSELAbits.ANSA2 = 1; } while(0)
#define RA2_SetDigitalMode()do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set RA4 procedures
#define RA4_SetHigh()    do { LATAbits.LATA4 = 1; } while(0)
#define RA4_SetLow()   do { LATAbits.LATA4 = 0; } while(0)
#define RA4_Toggle()   do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define RA4_GetValue()         PORTAbits.RA4
#define RA4_SetDigitalInput()   do { TRISAbits.TRISA4 = 1; } while(0)
#define RA4_SetDigitalOutput()  do { TRISAbits.TRISA4 = 0; } while(0)
#define RA4_SetPullup()     do { WPUAbits.WPUA4 = 1; } while(0)
#define RA4_ResetPullup()   do { WPUAbits.WPUA4 = 0; } while(0)
#define RA4_SetAnalogMode() do { ANSELAbits.ANSA4 = 1; } while(0)
#define RA4_SetDigitalMode()do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set RA5 procedures
#define RA5_SetHigh()    do { LATAbits.LATA5 = 1; } while(0)
#define RA5_SetLow()   do { LATAbits.LATA5 = 0; } while(0)
#define RA5_Toggle()   do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define RA5_GetValue()         PORTAbits.RA5
#define RA5_SetDigitalInput()   do { TRISAbits.TRISA5 = 1; } while(0)
#define RA5_SetDigitalOutput()  do { TRISAbits.TRISA5 = 0; } while(0)
#define RA5_SetPullup()     do { WPUAbits.WPUA5 = 1; } while(0)
#define RA5_ResetPullup()   do { WPUAbits.WPUA5 = 0; } while(0)

// get/set D4 aliases
#define D4_TRIS               TRISBbits.TRISB4
#define D4_LAT                LATBbits.LATB4
#define D4_PORT               PORTBbits.RB4
#define D4_WPU                WPUBbits.WPUB4
#define D4_OD                ODCONBbits.ODB4
#define D4_ANS                ANSELBbits.ANSB4
#define D4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define D4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define D4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define D4_GetValue()           PORTBbits.RB4
#define D4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define D4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define D4_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define D4_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define D4_SetPushPull()    do { ODCONBbits.ODB4 = 1; } while(0)
#define D4_SetOpenDrain()   do { ODCONBbits.ODB4 = 0; } while(0)
#define D4_SetAnalogMode()  do { ANSELBbits.ANSB4 = 1; } while(0)
#define D4_SetDigitalMode() do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set D5 aliases
#define D5_TRIS               TRISBbits.TRISB5
#define D5_LAT                LATBbits.LATB5
#define D5_PORT               PORTBbits.RB5
#define D5_WPU                WPUBbits.WPUB5
#define D5_OD                ODCONBbits.ODB5
#define D5_ANS                ANSELBbits.ANSB5
#define D5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define D5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define D5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define D5_GetValue()           PORTBbits.RB5
#define D5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define D5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define D5_SetPullup()      do { WPUBbits.WPUB5 = 1; } while(0)
#define D5_ResetPullup()    do { WPUBbits.WPUB5 = 0; } while(0)
#define D5_SetPushPull()    do { ODCONBbits.ODB5 = 1; } while(0)
#define D5_SetOpenDrain()   do { ODCONBbits.ODB5 = 0; } while(0)
#define D5_SetAnalogMode()  do { ANSELBbits.ANSB5 = 1; } while(0)
#define D5_SetDigitalMode() do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set D6 aliases
#define D6_TRIS               TRISBbits.TRISB6
#define D6_LAT                LATBbits.LATB6
#define D6_PORT               PORTBbits.RB6
#define D6_WPU                WPUBbits.WPUB6
#define D6_OD                ODCONBbits.ODB6
#define D6_ANS                ANSELBbits.ANSB6
#define D6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define D6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define D6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define D6_GetValue()           PORTBbits.RB6
#define D6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define D6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define D6_SetPullup()      do { WPUBbits.WPUB6 = 1; } while(0)
#define D6_ResetPullup()    do { WPUBbits.WPUB6 = 0; } while(0)
#define D6_SetPushPull()    do { ODCONBbits.ODB6 = 1; } while(0)
#define D6_SetOpenDrain()   do { ODCONBbits.ODB6 = 0; } while(0)
#define D6_SetAnalogMode()  do { ANSELBbits.ANSB6 = 1; } while(0)
#define D6_SetDigitalMode() do { ANSELBbits.ANSB6 = 0; } while(0)

// get/set D7 aliases
#define D7_TRIS               TRISBbits.TRISB7
#define D7_LAT                LATBbits.LATB7
#define D7_PORT               PORTBbits.RB7
#define D7_WPU                WPUBbits.WPUB7
#define D7_OD                ODCONBbits.ODB7
#define D7_ANS                ANSELBbits.ANSB7
#define D7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define D7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define D7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define D7_GetValue()           PORTBbits.RB7
#define D7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define D7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define D7_SetPullup()      do { WPUBbits.WPUB7 = 1; } while(0)
#define D7_ResetPullup()    do { WPUBbits.WPUB7 = 0; } while(0)
#define D7_SetPushPull()    do { ODCONBbits.ODB7 = 1; } while(0)
#define D7_SetOpenDrain()   do { ODCONBbits.ODB7 = 0; } while(0)
#define D7_SetAnalogMode()  do { ANSELBbits.ANSB7 = 1; } while(0)
#define D7_SetDigitalMode() do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set IND_OUT aliases
#define IND_OUT_TRIS               TRISCbits.TRISC0
#define IND_OUT_LAT                LATCbits.LATC0
#define IND_OUT_PORT               PORTCbits.RC0
#define IND_OUT_WPU                WPUCbits.WPUC0
#define IND_OUT_OD                ODCONCbits.ODC0
#define IND_OUT_ANS                ANSELCbits.ANSC0
#define IND_OUT_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define IND_OUT_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define IND_OUT_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define IND_OUT_GetValue()           PORTCbits.RC0
#define IND_OUT_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define IND_OUT_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define IND_OUT_SetPullup()      do { WPUCbits.WPUC0 = 1; } while(0)
#define IND_OUT_ResetPullup()    do { WPUCbits.WPUC0 = 0; } while(0)
#define IND_OUT_SetPushPull()    do { ODCONCbits.ODC0 = 1; } while(0)
#define IND_OUT_SetOpenDrain()   do { ODCONCbits.ODC0 = 0; } while(0)
#define IND_OUT_SetAnalogMode()  do { ANSELCbits.ANSC0 = 1; } while(0)
#define IND_OUT_SetDigitalMode() do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set EN aliases
#define EN_TRIS               TRISCbits.TRISC1
#define EN_LAT                LATCbits.LATC1
#define EN_PORT               PORTCbits.RC1
#define EN_WPU                WPUCbits.WPUC1
#define EN_OD                ODCONCbits.ODC1
#define EN_ANS                ANSELCbits.ANSC1
#define EN_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define EN_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define EN_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define EN_GetValue()           PORTCbits.RC1
#define EN_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define EN_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define EN_SetPullup()      do { WPUCbits.WPUC1 = 1; } while(0)
#define EN_ResetPullup()    do { WPUCbits.WPUC1 = 0; } while(0)
#define EN_SetPushPull()    do { ODCONCbits.ODC1 = 1; } while(0)
#define EN_SetOpenDrain()   do { ODCONCbits.ODC1 = 0; } while(0)
#define EN_SetAnalogMode()  do { ANSELCbits.ANSC1 = 1; } while(0)
#define EN_SetDigitalMode() do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set RS aliases
#define RS_TRIS               TRISCbits.TRISC2
#define RS_LAT                LATCbits.LATC2
#define RS_PORT               PORTCbits.RC2
#define RS_WPU                WPUCbits.WPUC2
#define RS_OD                ODCONCbits.ODC2
#define RS_ANS                ANSELCbits.ANSC2
#define RS_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define RS_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define RS_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RS_GetValue()           PORTCbits.RC2
#define RS_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define RS_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define RS_SetPullup()      do { WPUCbits.WPUC2 = 1; } while(0)
#define RS_ResetPullup()    do { WPUCbits.WPUC2 = 0; } while(0)
#define RS_SetPushPull()    do { ODCONCbits.ODC2 = 1; } while(0)
#define RS_SetOpenDrain()   do { ODCONCbits.ODC2 = 0; } while(0)
#define RS_SetAnalogMode()  do { ANSELCbits.ANSC2 = 1; } while(0)
#define RS_SetDigitalMode() do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set C_IN aliases
#define C_IN_TRIS               TRISCbits.TRISC3
#define C_IN_LAT                LATCbits.LATC3
#define C_IN_PORT               PORTCbits.RC3
#define C_IN_WPU                WPUCbits.WPUC3
#define C_IN_OD                ODCONCbits.ODC3
#define C_IN_ANS                ANSELCbits.ANSC3
#define C_IN_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define C_IN_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define C_IN_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define C_IN_GetValue()           PORTCbits.RC3
#define C_IN_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define C_IN_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define C_IN_SetPullup()      do { WPUCbits.WPUC3 = 1; } while(0)
#define C_IN_ResetPullup()    do { WPUCbits.WPUC3 = 0; } while(0)
#define C_IN_SetPushPull()    do { ODCONCbits.ODC3 = 1; } while(0)
#define C_IN_SetOpenDrain()   do { ODCONCbits.ODC3 = 0; } while(0)
#define C_IN_SetAnalogMode()  do { ANSELCbits.ANSC3 = 1; } while(0)
#define C_IN_SetDigitalMode() do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set C_OUT aliases
#define C_OUT_TRIS               TRISCbits.TRISC4
#define C_OUT_LAT                LATCbits.LATC4
#define C_OUT_PORT               PORTCbits.RC4
#define C_OUT_WPU                WPUCbits.WPUC4
#define C_OUT_OD                ODCONCbits.ODC4
#define C_OUT_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define C_OUT_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define C_OUT_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define C_OUT_GetValue()           PORTCbits.RC4
#define C_OUT_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define C_OUT_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define C_OUT_SetPullup()      do { WPUCbits.WPUC4 = 1; } while(0)
#define C_OUT_ResetPullup()    do { WPUCbits.WPUC4 = 0; } while(0)
#define C_OUT_SetPushPull()    do { ODCONCbits.ODC4 = 1; } while(0)
#define C_OUT_SetOpenDrain()   do { ODCONCbits.ODC4 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/