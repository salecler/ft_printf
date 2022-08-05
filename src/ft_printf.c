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
		else //Si pas de % et bien ce sera du texte ! Pas besoin d'args pour le coup car il n'y en a pas !
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
		args->len += intlen(d); // FAIRE UNE FT QUI COMPTE LE NOMBRE DE CHIFFRES !
	}
	else if (*format == 'c')
	{

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
		
	}
	else if (*format == 'x')
	{
		
	}
}

// We will write the text readed. If it enter here, it only could be text because there is no flags !
const char *read_text(s_list *content, const char *format)
{
	char	*next;

	next = ft_strchr(format);
	if (next)
		content->width = next - format;
	else
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