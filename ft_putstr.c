#include "ft_printf.h"

int ft_putstr(char *s)
{
    int printed;
    
    printed = 0;
    while(*s)
    {
        ft_putchar(*s);
        s++;
        printed++;
    }
    return(printed);
}
