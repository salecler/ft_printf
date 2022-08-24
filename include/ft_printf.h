/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salecler <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:56:09 by salecler          #+#    #+#             */
/*   Updated: 2022/08/24 11:56:10 by salecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

//Main archive
format_type(va_list args, char format);

//Utils archive
ft_strlen(char *str);
ft_putchar(char c);
ft_putstr(char *str);

//Formats archive
ft_putnbr(int n);
ft_putnbr_base(int n, char *base);
ft_putptr(int n);
#endif
