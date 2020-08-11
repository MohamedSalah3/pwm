/*
 * Interrupts.h
 *
 * Created: 21/01/2020 01:18:31 م
 *  Author: mo
 */


#ifndef INTERRUPTS_H_
#define INTERRUPTS_H_
#include "registers.h"

typedef void (*ptr_to_Fun)(void);
extern ptr_to_Fun INT0_external_interrupt;
extern ptr_to_Fun INT1_external_interrupt;
extern ptr_to_Fun Pin_Change_Interrupt_Request_0;
extern ptr_to_Fun Pin_Change_Interrupt_Request_1;
extern ptr_to_Fun Pin_Change_Interrupt_Request_2;
extern ptr_to_Fun watch_dog_interrupt;
extern ptr_to_Fun TIMER2COMPA;
extern ptr_to_Fun TIMER2COMPB;
extern ptr_to_Fun TIMER2OVF;
extern ptr_to_Fun TIMER1CAPT;
extern ptr_to_Fun TIMER1COMPA;
extern ptr_to_Fun TIMER1COMPB;
extern ptr_to_Fun TIMER1OVF;
extern ptr_to_Fun TIMER0COMPA;
extern ptr_to_Fun TIMER0COMPB;
extern ptr_to_Fun TIMER0OVF_INT;
extern ptr_to_Fun SPI_STC;
extern ptr_to_Fun USART_RXC;
extern ptr_to_Fun USART_UDRE;
extern ptr_to_Fun USART_TXC;
extern ptr_to_Fun ADC_INT;
extern ptr_to_Fun EE_RDY;
extern ptr_to_Fun ANA_COMP;
extern ptr_to_Fun TWI_I2C;
extern ptr_to_Fun SPM_RDY;
extern void G_interrupt_Enable(void);
extern void G_interrupt_Disable(void);
extern void EX_interrupt2_enable2(void);
extern void EX_interrupt0_enable0(void);
extern void EX_interrupt1_enable1(void);
extern volatile uint8_t u8_ovf_counter;

#define INT0    0
#define INT1    1

#endif /* INTERRUPTS_H_ */
