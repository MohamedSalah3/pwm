/*
 * registers.h
 *
 *  Created on: Oct 21, 2019
 *      Author: Sprints
 */

#ifndef REGISTERS_H_
#define REGISTERS_H_
#include "std_types.h"
#define ISC00 0
#define ISC01 1
#define ISC10 2
#define ISC11 3
#define EXTERNAL_INTERRUPT_CONTROL         *((reg_type8_t)(0x69))
#define MCUCR                              *((reg_type8_t)(0x55))
#define MCUCSR                             *((reg_type8_t)(0x54))
#define SMCR                               *((reg_type8_t)(0x53))
#define SREG                               *((reg_type8_t)(0x5F))
#define EXTERNAL_INTERRUPT_MASK_REG        *((reg_type8_t)(0x3D))
/*
 * PORTx registers
 */

#define PORTB_DATA     *((reg_type8_t)(0x25))
#define PORTB_DIR       *((reg_type8_t)(0x24))
#define PORTB_PIN       *((reg_type8_t)(0x23))

#define PORTC_DATA      *((reg_type8_t)(0x28))
#define PORTC_DIR      *((reg_type8_t)(0x27))
#define PORTC_PIN      *((reg_type8_t)(0x26))


#define PORTD_DATA      *((reg_type8_t)(0x2B))
#define PORTD_DIR      *((reg_type8_t)(0x2A))
#define PORTD_PIN        *((reg_type8_t)(0x29))


/*
 * General Timer registers
 */
//#define TIMSK       *((reg_type8_t)(0x35))
#define TIFR0        *((reg_type8_t)(0x35))
#define TIFR1        *((reg_type8_t)(0x36))
#define TIFR2        *((reg_type8_t)(0x37))
#define TIMSK0       *((reg_type8_t)(0x6E))
#define TIMSK1       *((reg_type8_t)(0x6F))
#define TIMSK2       *((reg_type8_t)(0x70))
/*
 * Timer 0 Registers
 */
#define TCCR0A       *((reg_type8_t)(0x44))
#define TCCR0B      *((reg_type8_t)(0x45))
#define TCCR0       *((reg_type16_t)(0x44))

#define TCNT0       *((reg_type8_t)(0x46))
#define OCR0A        *((reg_type8_t)(0x47))
#define OCR0B        *((reg_type8_t)(0x48))
#define OCR0        *((reg_type16_t)(0x47))


/***************************************************/
/* OCF2 TOV2 ICF1 OCF1A OCF1B TOV1 OCF0 TOV0<<TIFRReg */
/***************************************************/
/*
 * Timer 1 Registers
 */

#define TCCR1A        *((reg_type8_t)(0X80))
#define TCCR1B        *((reg_type8_t)(0X81))
#define TCCR1C        *((reg_type8_t)(0X82))


#define TCNT1H        *((reg_type8_t)(0X85))
#define TCNT1L        *((reg_type8_t)(0X84))
#define TCNT1        *((reg_type16_t)(0X84))

#define OCR1AH      *((reg_type8_t)(0X89))
#define OCR1AL      *((reg_type8_t)(0x88))
#define OCR1BH      *((reg_type8_t)(0X8B))
#define OCR1BL      *((reg_type8_t)(0x8A))
#define OCR1		*((reg_type32_t)(0x88))

#define ICR1H        *((reg_type8_t)(0x87))
#define ICR1L        *((reg_type8_t)(0x86))
#define ICR1        *((reg_type16_t)(0x86))

/*
 * Timer 2 Registers
 */
#define TCCR2A       *((reg_type8_t)(0xB0))
#define TCCR2B       *((reg_type8_t)(0xB1))

#define TCCR2       *((reg_type16_t)(0xB0))

#define TCNT2       *((reg_type8_t)(0XB2))

#define OCR2A        *((reg_type8_t)(0xB4))
#define OCR2B        *((reg_type8_t)(0xB3))
#define OCR2        *((reg_type16_t)(0xB3))

#define ASSR        *((reg_type8_t)(0xB6))
/*UART*/
#define UDR         *((reg_type8_t)(0x2C))             /*USART IO Data Register 159 $0C*/
#define UCSRA       *((reg_type8_t)(0x2B))
#define UCSRB       *((reg_type8_t)(0x2A))
#define UCSRC       *((reg_type8_t)(0x40))  /*This Address is chared with UBBRH*/
#define UBRRL       *((reg_type8_t)(0x29))

/*SPI*/
#define SPDR    *((reg_type8_t)(0x2F))
#define SPSR    *((reg_type8_t)(0x2E))
#define SPCR        *((reg_type8_t)(0x2D))


#endif /* REGISTERS_H_ */
