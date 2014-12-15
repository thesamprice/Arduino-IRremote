#ifndef IR_PWM_H
#define IR_PWM_H

#include "BoardDefs.h"
#include "wiring.h"
/*This is the pin that is connected to the ir led.*/
#define TIMER_PWM_PIN PIN_9
#define CORE_LED0_PIN PIN_8


#define TIMER_RESET
#define TIMER_ENABLE_PWM     
#define TIMER_DISABLE_PWM    
#define TIMER_ENABLE_INTR    interruptMode(TIMER_PWM_PIN,RISING);
#define TIMER_DISABLE_INTR   interruptMode(TIMER_PWM_PIN,DISABLED);

#define TIMER_INTR_NAME      TIMER2_COMPA_vect

void TIMER_CONFIG_NORMAL();
void TIMER_CONFIG_KHZ(double val);

void IR_ISR(void);;
/*!
*@brief clear interrupt
*/
void cli();

/*!
*@brief set interrupt
*/
void sei();
#endif
