#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>

typedef struct s_list
{
    int len;
    int width;
}              t_list;
const char *read_text(s_list *content, const char *format);
const char	*args_type(va_list args, const char *format, t_list *content);


void    ft_putchar(char c);
ft_printnbr(int num);
int int_len(int d);
int ft_strlen(const char *format);
char    *ft_strchr(const char *format);


#endif