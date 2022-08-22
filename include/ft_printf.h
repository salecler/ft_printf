#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

//Main archive
format_type(va_list args, char format);

//Utils archive
ft_putchar(char c);
ft_putstr(char *str);
ft_putnbr();
ft_putnbr_base();

#endif
