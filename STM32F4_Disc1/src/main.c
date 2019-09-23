#include "stm32f4xx.h"
#include "stm32f4_discovery.h"

GPIO_InitTypeDef GPIO_LED;

int main(void)
{


  RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD , ENABLE) ;

  GPIO_LED.GPIO_Pin = GPIO_Pin_15 ;
  GPIO_LED.GPIO_Mode = GPIO_Mode_OUT ;
  GPIO_LED.GPIO_OType = GPIO_OType_PP;
  GPIO_LED.GPIO_Speed = GPIO_Speed_50MHz;

  GPIO_Init(GPIOD , &GPIO_LED);

  GPIO_WriteBit (GPIOD , GPIO_Pin_15 , Bit_SET) ;
  for (int i= 0 ; i<=100 ; i++)
    {
  }


  GPIO_WriteBit (GPIOD , GPIO_Pin_15 , Bit_RESET) ;
  for (int j=0; j<=50 ; j++)
    {
}

  return 0;
}
