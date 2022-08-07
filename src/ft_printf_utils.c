#include "ft_printf.h"

ft_printnbr(int num)
{
    char    *number;
    int len;

    len = 0;
    number = ft_itoa(num);
    len = ft_strlen(number);
    while (*number)
    {
        ft_putchar(*number);
        number++;
    }
    free(number);
    return (len);
}

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