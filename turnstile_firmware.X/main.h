/* 
 * File:   main.h
 * Author: Rohan
 *
 * Created on December 20, 2016, 3:48 PM
 */

#ifndef MAIN_H
#define	MAIN_H

#ifdef	__cplusplus
extern "C" {
#endif

#define LOG 1
#define DEV_LOG 0
    
#define WDT_Enable()    do{ WDTCONbits.SWDTEN = 1;} while(0)
#define WDT_Disable()    do{ WDTCONbits.SWDTEN = 0;} while(0)

    typedef enum {
        APP_STATE_INIT,
        APP_STATE_BIO_SENSE,
        APP_STATE_SET_TIMER,
        APP_STATE_RELAY_FEEDBACK,
        APP_STATE_SWITCH_ON_SOLINOID,
        APP_STATE_TIMER_OVER,
        APP_STATE_WAIT_FOR_GATE_CLOSURE,
        APP_STATE_SWITCH_OFF_SOLINOID,
        APP_STATE_RESET,
        APP_STATE_ERROR
    } APP_State;

    typedef struct {
        APP_State appState;

        bool bio_pulse1;
        bool bio_pulse2;

        char timer_val;

        bool lock_TimerSet;

        bool lock_TimerOver;

        //short prox_on;
        
        bool prox_on;
        bool prox_off;


    } APP_Data;



#ifdef	__cplusplus
}
#endif

#endif	/* MAIN_H */

