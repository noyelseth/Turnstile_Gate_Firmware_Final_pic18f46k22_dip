
#include "mcc_generated_files/mcc.h"
#include "main.h"

APP_Data appData;

void HEART_BEAT() {
    //printf("TIMER_1..\r\n");
    led_heartbeat_Toggle();
}

void TMR0_LockCallBack() {
    if (appData.timer_val == 1) {
        appData.lock_TimerOver = true;
#if LOG
        printf("TMR0_CALL\r\n");
#endif
    } else {
        appData.timer_val -= 1;
#if DEV_LOG
        printf(".");
#endif
    }
}

void debounc_delayMS(int delay) {
    int val = 0;
    for (val = 0; val < delay; val++) {
        TMR3_Reload();
        TMR3_StartTimer();
        while (!TMR3_HasOverflowOccured());
        TMR3_StopTimer();
        PIR2bits.TMR3IF = 0;
#if DEV_LOG
        printf("#");
#endif
    }
#if LOG
    printf("PROCESS_START\r\n");
 #endif   
}

void PROX_ON_CHANGE() {
    printf("PROX_CHANGE..\r\n");

    if ((proximity_inp_GetValue() == false) && (appData.prox_off == false)) {
#if DEV_LOG
        printf("PROX on\r\n");
#endif
        appData.prox_on = true;
    } //else 
    if ((proximity_inp_GetValue() == true) && (appData.prox_on == true)) {
#if DEV_LOG
        printf("PROX off\r\n");
#endif
        appData.prox_off = true;
    }

    if (appData.bio_pulse1 || appData.bio_pulse2) { // Getting proxy pulse even if no BIO pulse, nothing to do.
    } else {
        appData.prox_on = false;
        appData.prox_off = false;
    }

    if (appData.prox_on && appData.prox_off) {
#if LOG
        printf("prox cycle complete\r\n");
#endif
        appData.appState = APP_STATE_SWITCH_OFF_SOLINOID;
        //appData.appState = APP_STATE_WAIT_FOR_GATE_CLOSURE;
        //appData.prox_on = 0;
    }
}

// RESET function APP_INIT

void ResetAll() {
    appData.bio_pulse1 = false;
    appData.bio_pulse2 = false;
    
    appData.lock_TimerSet = false;
    appData.lock_TimerOver = false;

    appData.prox_on = false;
    appData.prox_off = false;

    buzzer_SetLow();

    led_gate1_SetLow();
    led_gate2_SetLow();

    buzzer_SetLow();

    appData.prox_on = 0;
    appData.timer_val = 0;
#if DEV_LOG
    printf("At REST_ALL appData.timer_val = %d.\r\n", appData.timer_val);
#endif

    TMR0_Reload();

#if LOG
    printf("RESET_ALL..\r\n\n");
#endif
}

void APP_Init() {
    appData.appState = APP_STATE_INIT;
    ResetAll();
    printf("APP_INIT..\r\n");
}

void APP_Tasks() {
    switch (appData.appState) {
        case APP_STATE_INIT:
        {
            appData.appState = APP_STATE_BIO_SENSE;
            break;
        }

        case APP_STATE_BIO_SENSE:
        {
            if (bio_inp1_GetValue() == 0) {
                
                debounc_delayMS(10);
                if (bio_inp1_GetValue() == 0) {
                    appData.bio_pulse1 = true;
                    appData.appState = APP_STATE_SET_TIMER;
#if LOG
                    printf("bio_inp1_GetValue\r\n");
#endif
                }
            } else if (bio_inp2_GetValue() == 0) {
                debounc_delayMS(10);
                if (bio_inp2_GetValue() == 0) {
                    appData.bio_pulse2 = true;
                    appData.appState = APP_STATE_SET_TIMER;
#if LOG
                    printf("bio_inp2_GetValue\r\n");
#endif
                }
            }

            break;
        }

        case APP_STATE_SET_TIMER:
        {
            if ((appData.bio_pulse1 == true)) {
                //printf("appData.timer_val = %d.\r\n", appData.timer_val);
                if (timer_inp1_GetValue() == 0) {
#if DEV_LOG
                    printf("inp1=%d, inp2=%d, inp=%d..\r\n", timer_inp1_GetValue(), timer_inp2_GetValue(), timer_inp3_GetValue());
#endif
                    appData.timer_val = 3;
                    appData.lock_TimerSet = true;
                } else if (timer_inp2_GetValue() == 0) {
#if DEV_LOG
                    printf("inp1=%d, inp2=%d, inp=%d..\r\n", timer_inp1_GetValue(), timer_inp2_GetValue(), timer_inp3_GetValue());
#endif
                    appData.timer_val = 6;
                    appData.lock_TimerSet = true;
                } else if (timer_inp3_GetValue() == 0) {
#if DEV_LOG
                    printf("inp1=%d, inp2=%d, inp=%d..\r\n", timer_inp1_GetValue(), timer_inp2_GetValue(), timer_inp3_GetValue());
#endif
                    appData.timer_val = 10;
                    appData.lock_TimerSet = true;
                } else {
#if DEV_LOG
                    printf("buzzer inp1=%d, inp2=%d, inp=%d..\r\n", timer_inp1_GetValue(), timer_inp2_GetValue(), timer_inp3_GetValue());
#endif
                    buzzer_SetHigh();
                    debounc_delayMS(100);
                    appData.appState = APP_STATE_RESET;
                    break;
                }

#if DEV_LOG
                printf("Lock_Timer_val_Gate1 = %d.\r\n", appData.timer_val);
#endif
                appData.appState = APP_STATE_RELAY_FEEDBACK;
#if LOG
                printf("timer_set_for_gate1\r\n");
#endif

            } else if ((appData.bio_pulse2 == true)) {
                if (timer_inp1_GetValue() == 0) {
#if DEV_LOG                    
                    printf("inp1=%d, inp2=%d, inp=%d..\r\n", timer_inp1_GetValue(), timer_inp2_GetValue(), timer_inp3_GetValue());
#endif
                    appData.timer_val = 3;
                    appData.lock_TimerSet = true;
                } else if (timer_inp2_GetValue() == 0) {
#if DEV_LOG                    
                    printf("inp1=%d, inp2=%d, inp=%d..\r\n", timer_inp1_GetValue(), timer_inp2_GetValue(), timer_inp3_GetValue());
#endif
                    appData.timer_val = 6;
                    appData.lock_TimerSet = true;
                } else if (timer_inp3_GetValue() == 0) {
#if DEV_LOG                    
                    printf("inp1=%d, inp2=%d, inp=%d..\r\n", timer_inp1_GetValue(), timer_inp2_GetValue(), timer_inp3_GetValue());
#endif
                    appData.timer_val = 10;
                    appData.lock_TimerSet = true;
                } else {
#if DEV_LOG                    
                    printf("buzzer inp1=%d, inp2=%d, inp=%d..\r\n", timer_inp1_GetValue(), timer_inp2_GetValue(), timer_inp3_GetValue());
#endif
                    buzzer_SetHigh();
                    debounc_delayMS(100);
                    appData.appState = APP_STATE_RESET;
                    break;
                }
#if DEV_LOG
                printf("Lock_Timer_val_Gate2 = %d.\r\n", appData.timer_val);
#endif
                appData.appState = APP_STATE_RELAY_FEEDBACK;
#if LOG
                printf("timer_set_for_gate2\r\n");
#endif
            } else {
                appData.appState = APP_STATE_RESET;
            }
            break;
        }

        case APP_STATE_RELAY_FEEDBACK:
        {
            if (appData.bio_pulse1 && appData.lock_TimerSet) {
                printf("bio_pulse1_bool = %d, appData.lock_TimerSet_bool = %d\r\n", appData.bio_pulse1, appData.lock_TimerSet);
                appData.appState = APP_STATE_SWITCH_ON_SOLINOID;
#if LOG
                printf("Going to APP_STATE_SWITCH_ON_SOLINOID for Gate1\r\n");
#endif
            } else if (appData.bio_pulse2 && appData.lock_TimerSet) {
                printf("bio_pulse2_bool = %d, appData.lock_TimerSet_bool = %d\r\n", appData.bio_pulse2, appData.lock_TimerSet);
                appData.appState = APP_STATE_SWITCH_ON_SOLINOID;
#if LOG
                printf("Going to APP_STATE_SWITCH_ON_SOLINOID for Gate2\r\n");
#endif
            } else
                appData.appState = APP_STATE_RESET;

            break;
        }

        case APP_STATE_SWITCH_ON_SOLINOID:
        {
            if (appData.lock_TimerSet && appData.bio_pulse1) {
                //solenoid_fb1_SetLow();
                solenoid_out1_SetHigh();
                TMR0_StartTimer();
                led_gate1_SetHigh();
                buzzer_SetHigh();
                appData.appState = APP_STATE_TIMER_OVER;
#if LOG
                printf("SWITCH_ON_SOLINOID1..\r\n");
#endif
            }
            else if (appData.lock_TimerSet && appData.bio_pulse2) {
                //solenoid_fb2_SetLow();
                solenoid_out2_SetHigh();
                TMR0_StartTimer();
                led_gate2_SetHigh();
                buzzer_SetHigh();
                appData.appState = APP_STATE_TIMER_OVER;
#if LOG
                printf("SWITCH_ON_SOLINOID2..\r\n");
#endif
            } else
                appData.appState = APP_STATE_RESET;
            break;
        }

        case APP_STATE_TIMER_OVER:
        {
            if (appData.lock_TimerOver) {
                appData.lock_TimerOver = false;
                TMR0_StopTimer();
                appData.appState = APP_STATE_SWITCH_OFF_SOLINOID;
#if LOG
                printf("Lock Timer Over..\r\n");
#endif
            }
            break;
        }
        
        case APP_STATE_WAIT_FOR_GATE_CLOSURE:
        {
            debounc_delayMS(50);
            appData.appState = APP_STATE_SWITCH_OFF_SOLINOID;
            break;
        }

        case APP_STATE_SWITCH_OFF_SOLINOID:
        {

            TMR0_StopTimer();
            TMR0_Reload();
            appData.lock_TimerOver = false;

            solenoid_out1_SetLow();
            solenoid_out2_SetLow();

            appData.appState = APP_STATE_RESET;

#if LOG
            printf("SWITCH_OFF_SOLINOIDS\r\n");
#endif

            break;
        }

        case APP_STATE_RESET:
        {
            ResetAll();
            appData.appState = APP_STATE_INIT;
            break;
        }

        case APP_STATE_ERROR:
        {
            break;
        }
        default:
            break;
    }
}

/*
                         Main application
 */
void main(void) {
    // Initialize the device
    SYSTEM_Initialize();

    // TIMER InterruptHandler
    TMR0_SetInterruptHandler(TMR0_LockCallBack);
    TMR1_SetInterruptHandler(HEART_BEAT);

    //IOC RB4 Interrupt Handler
    IOCB4_SetInterruptHandler(PROX_ON_CHANGE);
    
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();


    TMR0_StopTimer();
    //TMR0_StartTimer();

    TMR1_StopTimer();
    TMR1_StartTimer(); // start timer1 for HeartBeat

    TMR3_StopTimer();
    //TMR3_StartTimer();

    printf("SYS_INIT..\r\n");
    APP_Init();

    while (1) {
        WDT_Enable();
        APP_Tasks();
        WDT_Disable();

    }
}
/**
 End of File
 */