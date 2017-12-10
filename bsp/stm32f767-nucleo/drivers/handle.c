#include <rtthread.h>
#include "board.h"
#include "finsh.h"


long reset(void)
{
	NVIC_SystemReset();
	return 0;
}

FINSH_FUNCTION_EXPORT(reset, reset RT-Thread system);
MSH_CMD_EXPORT(reset, reset RT-Thread system);
