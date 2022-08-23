#include "../include/ft_printf.h"

int	ft_putnbr(int n)
{
	int	nbr;
	static int	len;

	nbr = n;
	len = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
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

int	ft_putnbr_base(int n, char *base)
{
	int	nbr;
	static int	len;

	nbr = n;
	len = 0;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr > 16)
	{
		ft_putnbr_base(nbr / 16, base);
		nbr = nbr % 16;
	}
	len++;
	ft_putchar(base[nbr]);
	return (len);
}

int	ft_putptr(void *n)
{
	int	len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	write(1, "0x", 2);
	len += 2;
	len += ft_putnbr_base(n, base);
	return (len);
}
