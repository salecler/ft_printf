#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list args;
	va_start(args, format)
	t_list *content;
	content->len = 0;
	content->width = 0;

	while (*format)
	{
		if (format == '%') // On check l'argument
			format = args_type(args, format + 1, &content); // Check de l'argument, arg pour traduire le type d'argument, format pour le voir et content pour y ajouter des informations.
		else //Si pas de % et bien ce sera du texte ! Pas besoin d'args pour le coup car il n'y en a pas ou plus!
			format = read_text(&content, format);
		if (!format)
		{
			write(1, "(null)", 6);
			va_end(args); //Terminer les va
			return (content->len);
		}
	}
	va_end(arg);
	return (content->len);
}

const char	*args_type(va_list args, const char *format, t_list *content)
{
	if (*format == 'd') // On va traduire en décimal !
	{
		int	d;
		// va_arg nous permet de traduire l'argument %d en int !
		d = va_arg(args, int);
		ft_putnbr(d);
		args->len += int_len(d); // FAIRE UNE FT QUI COMPTE LE NOMBRE DE CHIFFRES !
	}
	else if (*format == 'c')
	{
		char	c;

		c = va_arg(args, char);
		if (!c)
		{
			write(1, "(null)", 6);
			content->len += 6;
		}
		else
		{
		ft_putchar(c);
		args->len += 1;
		}
	}
	else if (*format == 's')
	{
		char	*str;

		*str = va_arg(args, char *);
		if (!str)
		{
			write(1, "(null)", 6);
			content->len += 6;
		}
		else
		{
			ft_putstr(str);
			content->len += ft_strlen(str);
		}
	}
	else if (*format == 'p')
	{
		unsigned long	ptr;

		*ptr = va_arg(args, unsigned long);
		if (!ptr)
		{
			write(1, "(null)", 6);
			content->len += 6;
		}
		else
			content->len += ft_putptr(ptr); // ???????????????????
	}
	else if (*format == 'x')
	{
		
	}
	else if (*format == 'd' || *format == 'i')
	{
		int	num;

		num = va_arg(args, int);
		content->len += ft_printnbr(num);
	}
}

// We will write the text readed. If it enter here, it only could be text because there is no flags !
const char *read_text(s_list *content, const char *format)
{
	char	*next;

	next = ft_strchr(format);
	content->width = ft_strlen(format);
	write(1, format, content->width);
	content->len += content->width;
	while (*format && *format != '%')
		format++;
	return (format);
}

int	main(void)
{
	ft_printf(void);
	return (0);
}