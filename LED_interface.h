#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_

#define SINK_u8CONNECTION      0u
#define SOURCE_u8CONNECTION    1u

uint8 LED_u8TurnOn(uint8 Copy_u8Port, uint8 Copy_u8Pin, uint8 Copy_u8Connection);
uint8 LED_u8TurnOff(uint8 Copy_u8Port, uint8 Copy_u8Pin, uint8 Copy_u8Connection);
uint8 LED_u8Toggle(uint8 Copy_u8Port, uint8 Copy_u8Pin);

#endif /* LED_INTERFACE_H_ */
