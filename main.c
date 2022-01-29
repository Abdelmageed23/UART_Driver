/*
 * main.c
 *
 *  Created on: Jan 25, 2022
 *      Author: Abdelrahman Mohamed
 */

#include "LIB/BIT_MATH.h"
#include "LIB/STD_TYPES.h"

#include "MCAL/UART/UART_Interface.h"

void main()
{
	/*Application Initialization*/
	UART_Init();
	uint8_t string[100];
	UART_SendString("Enter A String : \n\r");

	/*	Application Run Time*/
	while(1)
	{
		UART_ReceiveString(&string);
		UART_SendString("Echo : ");
		UART_SendString(string);
		UART_SendString("\n\r");
	}


}
