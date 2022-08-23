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
