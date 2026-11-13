#include "ft_printf.h"

int	ft_putnbr(long n)
{
	int	printed;

	printed = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
		printed++;
	}
	if (n > 9)
		printed += ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
	printed++;
	return (printed);
}