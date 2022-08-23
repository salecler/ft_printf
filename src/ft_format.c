#include "ft_printf.h"

static int	ft_putnbr(int n)
{
	int	nbr;
	static int	len;

	nbr = n;
	len = 0;
	if (nbr < 0)
	{
		write(1, '-', 1);
		nbr *= -1;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		nbr = nbr % 10;
	}
	len++;
	ft_putchar(nbr + '0');
	if (n < 0)
		len++;
	return (len);
}
