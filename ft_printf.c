#include "ft_printf.h"

int	ft_formatcheck(const char *str, va_list args)
{
	int	len;

	len = 0;
	if (*str == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (*str == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (*str == 'd' || *str == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (*str == 'u')
		len += ft_putunsigned(va_arg(args, unsigned int));
	else if (*str == 'p')
		len += ft_printptr(va_arg(args, unsigned long long));
	else if (*str == 'X')
		len += ft_bigx(va_arg(args, unsigned int));
	else if (*str == 'x')
		len += ft_forxkucuk(va_arg(args, unsigned int));
	else
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		x;
	va_list	args;

	va_start(args, str);
	x = 0;
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			x += ft_formatcheck(str, args);
		}
		else
			x += ft_putchar(*str);
		str++;
	}
	va_end (args);
	return (x);
}
