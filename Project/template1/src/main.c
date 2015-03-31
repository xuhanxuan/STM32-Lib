#include "head.h"

int main()
{
  while(1)
  {
    GPIO_SetBits(GPIOB,GPIO_Pin_5);
  }
}
