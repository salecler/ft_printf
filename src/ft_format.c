/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:55:55 by salecler          #+#    #+#             */
/*   Updated: 2022/08/24 17:47:05 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putnbr(int n)
{
	int			nbr;
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

int	ft_putnbr_base(unsigned long n, char *base)
{
	long int	nbr;
	static int	len;

	nbr = (unsigned int)n;
	len = 0;
	if (nbr > 16)
	{
		ft_putnbr_base(nbr / 16, base);
		nbr = nbr % 16;
	}
	len++;
	ft_putchar(base[nbr]);
	return (len);
}

int	ft_puthex(int n, char *base)
{
	int	len;
	int	nbr;

	len = 0;
	nbr = n;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr > 16)
	{
		ft_puthex(nbr / 16, base);
		nbr = nbr % 16;
	}
	len++;
	ft_putchar(nbr + '0');
	if (n < 0)
		len++;
	return (len);
}

int	ft_putptr(void *n)
{
	int		len;
	int		nbr;
	char	*base;

	len = 0;
	nbr = (int)n;
	base = "0123456789abcdef";
	write(1, "0x", 2);
	len += 2;
	len += ft_putnbr_base(nbr, base);
	return (len);
}
