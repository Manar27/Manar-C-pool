#include "../Common/Bit_math.h"
#include "../Common/Macro's.h"
#include "../Common/typedef.h"

#include "../MCAL/DIO/Header/DIO_interface.h"
#include "../MCAL/UART/Header/UART_int.h"
#include "../HAL/LCD/Header/LCD_interface.h"
#include <util/delay.h>
void main (void)
{
	LCD_Void8BitInit();
	DIO_VoidSetPinDir(Group_A,Pin_A0, Output);
	DIO_VoidSetPinValue(Group_A,Pin_A0, Low);
	DIO_VoidSetPinDir(Group_A,Pin_A1, Output);
	DIO_VoidSetPinValue(Group_A,Pin_A1, Low);
	DIO_VoidSetPinDir(Group_A,Pin_A2, Output);
	DIO_VoidSetPinValue(Group_A,Pin_A2, Low);

	DIO_VoidSetPinDir(Group_D, Pin_D0, Input);
	DIO_VoidSetPinValue(Group_D,Pin_D0,High);

	DIO_VoidSetPinDir(Group_D, Pin_D1, Output);
	DIO_VoidSetPinValue(Group_D,Pin_D1,Low);

	UART_tstrConfiguration object ;
	object.UART_u8Mode = UART_u8_Recieve;
	object.UART_u16BaudRate = UART_u16_BAUD_RATE_9600;
	object.UART_u8DataBits = UART_u8_EIGHT_DATA_BITS;
	object.UART_u8PStopBit = UART_u8_ONE_STOP_BIT;
	object.UART_u8ParityBits = UART_u8_DISABLED_PARITY;

	UART_enuInit(&object);
	u8 Rec_Value = 0;
	while(1)
	{
		UART_enuReceive(&Rec_Value);
		switch (Rec_Value)
		{
		case 'A':
			DIO_VoidSetPinValue(Group_A, Pin_A1, Low);
			DIO_VoidSetPinValue(Group_A, Pin_A0, High);
			break;
		case 'B':
			DIO_VoidSetPinValue(Group_A, Pin_A0, Low);
			DIO_VoidSetPinValue(Group_A, Pin_A1, High);
			break;
		default:
			DIO_VoidSetPinValue(Group_A, Pin_A0, Low);
			DIO_VoidSetPinValue(Group_A, Pin_A1, Low);
			break;
		}
		LCD_VoidSendCommand(LCD_ClearDisplay);
		_delay_ms(2);
		LCD_VoidSendChar(Rec_Value);
		_delay_ms(500);
	}
}
/*switch (Rec_Value)
		{
		case 'A':
			DIO_VoidSetPinValue(Group_A, Pin_A1, Low);
			DIO_VoidSetPinValue(Group_A, Pin_A0, High);
			break;
		case 'B':
			DIO_VoidSetPinValue(Group_A, Pin_A0, Low);
			DIO_VoidSetPinValue(Group_A, Pin_A1, High);
			break;
		default:
			DIO_VoidSetPinValue(Group_A, Pin_A0, Low);
			DIO_VoidSetPinValue(Group_A, Pin_A1, Low);
			break;
		}*/
