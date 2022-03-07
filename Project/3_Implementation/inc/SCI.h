/**
 * @file SCI.h
 * @author Savitha
 * @brief 
 * @version 0.1
 * @date 2022-03-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#define FOSC_FOR_USART        16000000UL
#define BAUD_RATE     9600UL
#define BAUD_VAL      FOSC_FOR_USART/16/BAUD_RATE-1


void USART_Tx_byte(char* c );

void usart_init(unsigned int );

void USART_Tx_string( char*);