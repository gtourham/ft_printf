#include "ft_printf.h"

static int check_helper(va_list *lst, char *frmt)
{
    int printd;

    printd = 0;
    if (*frmt == 'c')
		printd += ft_putchar(va_arg(*lst, int));
	else if (*frmt == 's')
		printd += ft_putstr(va_arg(*lst, char *));
	else if (*frmt == 'p')
		printd += ft_putadress(va_arg(*lst, void *));
	else if (*frmt == 'i' || *frmt == 'd')
		printd += ft_putnbr(va_arg(*lst, int));
	else if (*frmt == 'u')
		printd += ft_putnbr(va_arg(*lst, unsigned int));
	else if (*frmt == 'x' || *frmt == 'X')
	{
		if (*frmt == 'x')
			printd += ft_puthex(va_arg(*lst, unsigned int), *frmt);
		else
			printd += ft_puthex(va_arg(*lst, unsigned int), *frmt);
	}
	else if (*frmt == '%')
		printd += ft_putchar(*frmt);
    return(printd);
}
int ft_printf(const char *format, ...)
{
    unsigned int printed;
    va_list list;

    if(!format)
        return(0);
    printed = 0;
    va_start(list, format);
    while(*format)
    {
        if(*format == '%')
        {
            format++;
            printed += check_helper(&list, (char *)format);
        }
        else
            printed += ft_putchar(*format);
        format++;
    }
    va_end(list);
    return(printed);
}
