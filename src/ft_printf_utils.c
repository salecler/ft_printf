#include "ft_printf.h"

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