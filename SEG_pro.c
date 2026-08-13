#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include "defines.h"
#include "SEG_prv.h"
#include "SEG_interface.h"
#include "DIO_interface.h"

uint8 SEG_u8DisplayNumber(uint8 Copy_u8Port, uint8 Copy_u8Number, uint8 Copy_u8Type)
{
	uint8 Local_u8ErrorState = OK;
	uint8 Local_u8Pattern;

	if (Copy_u8Number >= SEG_u8MIN_DIGIT && Copy_u8Number <= SEG_u8MAX_DIGIT)
	{
		Local_u8Pattern = SEG_au8CathodePattern[Copy_u8Number];

		if (Copy_u8Type == SEG_u8COMMON_ANODE)
		{
			Local_u8Pattern = ~Local_u8Pattern;
		}

		DIO_u8SetPortValue(Copy_u8Port, Local_u8Pattern);
	}
	else
	{
		Local_u8ErrorState = NOK;
	}

	return Local_u8ErrorState;
}
