#include "ft_printf.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while (str)
    {
        write(1, *str, 1);
        str++;
    }
}

int int_len(int d)
{
    int len;

    len = 0;
    while (d > 0)
    {
        d /= 10;
        len++;
    }
    return (len);
}

int ft_strlen(const char *format)
{
    int len;

    len = 0;
    while (format[len])
        len++;
    return (len);
}

char    *ft_strchr(const char *format)
{
    while (*format)
    {
        if (*format == '%')
            return ((char *)format);
        format++;
    }
    if (!format)
        return ((char *)format);
    return (NULL);
}