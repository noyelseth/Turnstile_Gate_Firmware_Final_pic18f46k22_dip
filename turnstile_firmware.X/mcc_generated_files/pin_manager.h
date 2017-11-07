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
        Product Revision  :  MPLAB(c) Code Configurator - 4.15
        Device            :  PIC18F46K22
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

// get/set bio_inp1 aliases
#define bio_inp1_TRIS               TRISAbits.TRISA0
#define bio_inp1_LAT                LATAbits.LATA0
#define bio_inp1_PORT               PORTAbits.RA0
#define bio_inp1_ANS                ANSELAbits.ANSA0
#define bio_inp1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define bio_inp1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define bio_inp1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define bio_inp1_GetValue()           PORTAbits.RA0
#define bio_inp1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define bio_inp1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define bio_inp1_SetAnalogMode()  do { ANSELAbits.ANSA0 = 1; } while(0)
#define bio_inp1_SetDigitalMode() do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set bio_inp2 aliases
#define bio_inp2_TRIS               TRISAbits.TRISA1
#define bio_inp2_LAT                LATAbits.LATA1
#define bio_inp2_PORT               PORTAbits.RA1
#define bio_inp2_ANS                ANSELAbits.ANSA1
#define bio_inp2_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define bio_inp2_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define bio_inp2_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define bio_inp2_GetValue()           PORTAbits.RA1
#define bio_inp2_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define bio_inp2_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define bio_inp2_SetAnalogMode()  do { ANSELAbits.ANSA1 = 1; } while(0)
#define bio_inp2_SetDigitalMode() do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set timer_inp1 aliases
#define timer_inp1_TRIS               TRISAbits.TRISA2
#define timer_inp1_LAT                LATAbits.LATA2
#define timer_inp1_PORT               PORTAbits.RA2
#define timer_inp1_ANS                ANSELAbits.ANSA2
#define timer_inp1_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define timer_inp1_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define timer_inp1_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define timer_inp1_GetValue()           PORTAbits.RA2
#define timer_inp1_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define timer_inp1_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define timer_inp1_SetAnalogMode()  do { ANSELAbits.ANSA2 = 1; } while(0)
#define timer_inp1_SetDigitalMode() do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set timer_inp2 aliases
#define timer_inp2_TRIS               TRISAbits.TRISA3
#define timer_inp2_LAT                LATAbits.LATA3
#define timer_inp2_PORT               PORTAbits.RA3
#define timer_inp2_ANS                ANSELAbits.ANSA3
#define timer_inp2_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define timer_inp2_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define timer_inp2_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define timer_inp2_GetValue()           PORTAbits.RA3
#define timer_inp2_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define timer_inp2_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define timer_inp2_SetAnalogMode()  do { ANSELAbits.ANSA3 = 1; } while(0)
#define timer_inp2_SetDigitalMode() do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set timer_inp3 aliases
#define timer_inp3_TRIS               TRISAbits.TRISA4
#define timer_inp3_LAT                LATAbits.LATA4
#define timer_inp3_PORT               PORTAbits.RA4
#define timer_inp3_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define timer_inp3_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define timer_inp3_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define timer_inp3_GetValue()           PORTAbits.RA4
#define timer_inp3_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define timer_inp3_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)

// get/set solenoid_fb1 aliases
#define solenoid_fb1_TRIS               TRISBbits.TRISB0
#define solenoid_fb1_LAT                LATBbits.LATB0
#define solenoid_fb1_PORT               PORTBbits.RB0
#define solenoid_fb1_WPU                WPUBbits.WPUB0
#define solenoid_fb1_ANS                ANSELBbits.ANSB0
#define solenoid_fb1_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define solenoid_fb1_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define solenoid_fb1_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define solenoid_fb1_GetValue()           PORTBbits.RB0
#define solenoid_fb1_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define solenoid_fb1_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define solenoid_fb1_SetPullup()      do { WPUBbits.WPUB0 = 1; } while(0)
#define solenoid_fb1_ResetPullup()    do { WPUBbits.WPUB0 = 0; } while(0)
#define solenoid_fb1_SetAnalogMode()  do { ANSELBbits.ANSB0 = 1; } while(0)
#define solenoid_fb1_SetDigitalMode() do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set solenoid_fb2 aliases
#define solenoid_fb2_TRIS               TRISBbits.TRISB1
#define solenoid_fb2_LAT                LATBbits.LATB1
#define solenoid_fb2_PORT               PORTBbits.RB1
#define solenoid_fb2_WPU                WPUBbits.WPUB1
#define solenoid_fb2_ANS                ANSELBbits.ANSB1
#define solenoid_fb2_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define solenoid_fb2_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define solenoid_fb2_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define solenoid_fb2_GetValue()           PORTBbits.RB1
#define solenoid_fb2_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define solenoid_fb2_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define solenoid_fb2_SetPullup()      do { WPUBbits.WPUB1 = 1; } while(0)
#define solenoid_fb2_ResetPullup()    do { WPUBbits.WPUB1 = 0; } while(0)
#define solenoid_fb2_SetAnalogMode()  do { ANSELBbits.ANSB1 = 1; } while(0)
#define solenoid_fb2_SetDigitalMode() do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set proximity_inp aliases
#define proximity_inp_TRIS               TRISBbits.TRISB4
#define proximity_inp_LAT                LATBbits.LATB4
#define proximity_inp_PORT               PORTBbits.RB4
#define proximity_inp_WPU                WPUBbits.WPUB4
#define proximity_inp_ANS                ANSELBbits.ANSB4
#define proximity_inp_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define proximity_inp_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define proximity_inp_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define proximity_inp_GetValue()           PORTBbits.RB4
#define proximity_inp_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define proximity_inp_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define proximity_inp_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define proximity_inp_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define proximity_inp_SetAnalogMode()  do { ANSELBbits.ANSB4 = 1; } while(0)
#define proximity_inp_SetDigitalMode() do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set buzzer aliases
#define buzzer_TRIS               TRISCbits.TRISC4
#define buzzer_LAT                LATCbits.LATC4
#define buzzer_PORT               PORTCbits.RC4
#define buzzer_ANS                ANSELCbits.ANSC4
#define buzzer_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define buzzer_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define buzzer_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define buzzer_GetValue()           PORTCbits.RC4
#define buzzer_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define buzzer_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define buzzer_SetAnalogMode()  do { ANSELCbits.ANSC4 = 1; } while(0)
#define buzzer_SetDigitalMode() do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set led_gate1 aliases
#define led_gate1_TRIS               TRISCbits.TRISC5
#define led_gate1_LAT                LATCbits.LATC5
#define led_gate1_PORT               PORTCbits.RC5
#define led_gate1_ANS                ANSELCbits.ANSC5
#define led_gate1_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define led_gate1_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define led_gate1_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define led_gate1_GetValue()           PORTCbits.RC5
#define led_gate1_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define led_gate1_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define led_gate1_SetAnalogMode()  do { ANSELCbits.ANSC5 = 1; } while(0)
#define led_gate1_SetDigitalMode() do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()    do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()   do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()   do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()         PORTCbits.RC6
#define RC6_SetDigitalInput()   do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()  do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetAnalogMode() do { ANSELCbits.ANSC6 = 1; } while(0)
#define RC6_SetDigitalMode()do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()    do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()   do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()   do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()         PORTCbits.RC7
#define RC7_SetDigitalInput()   do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()  do { TRISCbits.TRISC7 = 0; } while(0)
#define RC7_SetAnalogMode() do { ANSELCbits.ANSC7 = 1; } while(0)
#define RC7_SetDigitalMode()do { ANSELCbits.ANSC7 = 0; } while(0)

// get/set solenoid_out1 aliases
#define solenoid_out1_TRIS               TRISDbits.TRISD2
#define solenoid_out1_LAT                LATDbits.LATD2
#define solenoid_out1_PORT               PORTDbits.RD2
#define solenoid_out1_ANS                ANSELDbits.ANSD2
#define solenoid_out1_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define solenoid_out1_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define solenoid_out1_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define solenoid_out1_GetValue()           PORTDbits.RD2
#define solenoid_out1_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define solenoid_out1_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define solenoid_out1_SetAnalogMode()  do { ANSELDbits.ANSD2 = 1; } while(0)
#define solenoid_out1_SetDigitalMode() do { ANSELDbits.ANSD2 = 0; } while(0)

// get/set solenoid_out2 aliases
#define solenoid_out2_TRIS               TRISDbits.TRISD3
#define solenoid_out2_LAT                LATDbits.LATD3
#define solenoid_out2_PORT               PORTDbits.RD3
#define solenoid_out2_ANS                ANSELDbits.ANSD3
#define solenoid_out2_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define solenoid_out2_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define solenoid_out2_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define solenoid_out2_GetValue()           PORTDbits.RD3
#define solenoid_out2_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define solenoid_out2_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define solenoid_out2_SetAnalogMode()  do { ANSELDbits.ANSD3 = 1; } while(0)
#define solenoid_out2_SetDigitalMode() do { ANSELDbits.ANSD3 = 0; } while(0)

// get/set led_gate2 aliases
#define led_gate2_TRIS               TRISDbits.TRISD4
#define led_gate2_LAT                LATDbits.LATD4
#define led_gate2_PORT               PORTDbits.RD4
#define led_gate2_ANS                ANSELDbits.ANSD4
#define led_gate2_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define led_gate2_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define led_gate2_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define led_gate2_GetValue()           PORTDbits.RD4
#define led_gate2_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define led_gate2_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define led_gate2_SetAnalogMode()  do { ANSELDbits.ANSD4 = 1; } while(0)
#define led_gate2_SetDigitalMode() do { ANSELDbits.ANSD4 = 0; } while(0)

// get/set led_heartbeat aliases
#define led_heartbeat_TRIS               TRISDbits.TRISD5
#define led_heartbeat_LAT                LATDbits.LATD5
#define led_heartbeat_PORT               PORTDbits.RD5
#define led_heartbeat_ANS                ANSELDbits.ANSD5
#define led_heartbeat_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define led_heartbeat_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define led_heartbeat_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define led_heartbeat_GetValue()           PORTDbits.RD5
#define led_heartbeat_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define led_heartbeat_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define led_heartbeat_SetAnalogMode()  do { ANSELDbits.ANSD5 = 1; } while(0)
#define led_heartbeat_SetDigitalMode() do { ANSELDbits.ANSD5 = 0; } while(0)

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


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCB4 pin functionality
 * @Example
    IOCB4_ISR();
 */
void IOCB4_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCB4 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCB4 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCB4_SetInterruptHandler(MyInterruptHandler);

*/
void IOCB4_SetInterruptHandler(void* InterruptHandler);

/**
  @Summary
    Dynamic Interrupt Handler for IOCB4 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCB4_SetInterruptHandler() method.
    This handler is called every time the IOCB4 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCB4_SetInterruptHandler(IOCB4_InterruptHandler);

*/
extern void (*IOCB4_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCB4 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCB4_SetInterruptHandler() method.
    This handler is called every time the IOCB4 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCB4_SetInterruptHandler(IOCB4_DefaultInterruptHandler);

*/
void IOCB4_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/