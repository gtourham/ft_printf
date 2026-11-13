#include "ft_printf.h"

static int	ptr_hex(unsigned long num)
{
	size_t	printed;
	char	*hex_digits;

	printed = 0;
	hex_digits = "0123456789abcdef";
	if (num >= 16)
		printed += ptr_hex(num / 16);
	return (printed += ft_putchar(hex_digits[num % 16]));
}

int	ft_putadress(void *ptr)
{
	size_t	printed;

	printed = 2;
	write(1, "0x", 2);
	printed += ptr_hex((unsigned long)ptr);
	return (printed);
}