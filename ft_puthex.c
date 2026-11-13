#include "ft_printf.h"

int	ft_puthex(unsigned int num, char type)
{
	size_t	printed;
	char	*hex_digits;

	printed = 0;
	hex_digits = "0123456789abcdef";
	if (type == 'X')
		hex_digits = "0123456789ABCDEF";
	if (num >= 16)
		printed += ft_puthex(num / 16, type);
	return (printed += ft_putchar(hex_digits[num % 16]));
}