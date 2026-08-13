#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "defines.h"
#include "LED_Cfg.h"
#include "LED_prv.h"
#include "LED_interface.h"
#include "DIO_interface.h"

uint8 LED_u8TurnOn(uint8 Copy_u8Port,uint8 Copy_u8Pin,uint8 Copy_u8Connection)
{
	uint8 Local_u8ErrorState = OK;

	if((Copy_u8Port >= DIO_u8PORTA && Copy_u8Port <= DIO_u8PORTD )  && (Copy_u8Pin >= DIO_u8PIN0 && Copy_u8Pin <= DIO_u8PIN7 ))
	{
		if (Copy_u8Connection == SINK_u8CONNECTION)
		{
			DIO_u8SetPinValue( Copy_u8Port, Copy_u8Pin,DIO_u8PIN_LOW);
		}else if (Copy_u8Connection == SOURCE_u8CONNECTION)
		{
			DIO_u8SetPinValue( Copy_u8Port, Copy_u8Pin,DIO_u8PIN_HIGH);
		}else
		{
			Local_u8ErrorState =NOK;
		}
	}else
	{
		Local_u8ErrorState =NOK;
	}

	return Local_u8ErrorState;
}

uint8 LED_u8TurnOff(uint8 Copy_u8Port,uint8 Copy_u8Pin,uint8 Copy_u8Connection)
{
	uint8 Local_u8ErrorState = OK;

	if((Copy_u8Port >= DIO_u8PORTA && Copy_u8Port <= DIO_u8PORTD )  && (Copy_u8Pin >= DIO_u8PIN0 && Copy_u8Pin <= DIO_u8PIN7 ))
	{
		if (Copy_u8Connection == SINK_u8CONNECTION)
		{
			DIO_u8SetPinValue( Copy_u8Port, Copy_u8Pin,DIO_u8PIN_HIGH);
		}else if (Copy_u8Connection == SOURCE_u8CONNECTION)
		{
			DIO_u8SetPinValue( Copy_u8Port, Copy_u8Pin,DIO_u8PIN_LOW);
		}else
		{
			Local_u8ErrorState =NOK;
		}
	}else
	{
		Local_u8ErrorState =NOK;
	}

	return Local_u8ErrorState;
}

uint8 LED_u8Toggle(uint8 Copy_u8Port,uint8 Copy_u8Pin)
{
	uint8 Local_u8ErrorState = OK;

	if((Copy_u8Port >= DIO_u8PORTA && Copy_u8Port <= DIO_u8PORTD )  && (Copy_u8Pin >= DIO_u8PIN0 && Copy_u8Pin <= DIO_u8PIN7 ))
	{
		DIO_u8TogglePin( Copy_u8Port, Copy_u8Pin);
	}else
	{
		Local_u8ErrorState =NOK;
	}

	return Local_u8ErrorState;
}
