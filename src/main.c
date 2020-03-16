#include <zephyr.h>
#include <version.h>
#include <string.h>
#include <sys/printk.h>
#include <console/console.h>

void main(void)
{
    printk("Hello! I'm running Zephyr %s on %s, a %s board.\n\n", KERNEL_VERSION_STRING, CONFIG_BOARD, CONFIG_ARCH);

    console_getline_init();
    printk("Enter a line finishing with Enter:\n");

    while (1)
    {
        printk("> ");
        char *s = console_getline();

        printk("Typed line: %s\n", s);
        printk("Last char was: 0x%x\n", s[strlen(s) - 1]);
    }
}