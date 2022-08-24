/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:56:09 by salecler          #+#    #+#             */
/*   Updated: 2022/08/24 14:12:37 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
//Main archive
int	format_type(va_list args, char format);

//Utils archive
int	ft_strlen(char *str);
int	ft_putchar(char c);
int	ft_putstr(char *str);

//Formats archive
int	ft_putnbr(int n);
int	ft_putnbr_base(int n, char *base);
int	ft_puthex(int n, char *base);
int	ft_putptr(void *n);
#endif
