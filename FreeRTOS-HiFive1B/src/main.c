#include <stdio.h>

#include "FreeRTOS.h"
#include "task.h"

int main()
{
    puts("Hello from SiFive HiFive1B!\n");
    printf("I'm running on FreeRTOS %s\n", tskKERNEL_VERSION_NUMBER);
    while (1)
        ;
}
