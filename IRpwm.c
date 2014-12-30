#include "IRpwm.h"

#include "eagle_soc.h"
//XXX: 0xffffffff/(80000000/16)=35A
#define US_TO_RTC_TIMER_TICKS(t)          \
    ((t) ?                                   \
     (((t) > 0x35A) ?                   \
      (((t)>>2) * ((APB_CLK_FREQ>>4)/250000) + ((t)&0x3) * ((APB_CLK_FREQ>>4)/1000000))  :    \
      (((t) *(APB_CLK_FREQ>>4)) / 1000000)) :    \
     0)

//FRC1
#define FRC1_ENABLE_TIMER  BIT7


void TIMER_CONFIG_NORMAL();
void TIMER_CONFIG_KHZ(double val)
{
	double hz = val*1000;
}

void cli()
{

}
void sei()
{

}