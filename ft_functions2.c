#include "ft_printf.h"

int	ft_putptr(unsigned long long a)
{
	int	len;

	len = 0;
	if (a >= 16)
	{
		len += ft_putptr(a / 16);
		len += ft_putptr(a % 16);
	}
	else if (a > 9)
	{
		len += ft_putchar(a - 10 + 'a');
	}
	else
		len += ft_putchar(a + '0');
	return (len);
}

int	ft_bigx(unsigned int a)
{
	int	len;

	len = 0;
	if (a >= 16)
	{
		len += ft_bigx(a / 16);
		len += ft_bigx(a % 16);
	}
	else if (a > 9)
	{
		len += ft_putchar(a - 10 + 'A');
	}
	else
		len += ft_putchar(a + '0');
	return (len);
}

int	ft_forxkucuk(unsigned int a)
{
	int	len;

	len = 0;
	if (a >= 16)
	{
		len += ft_forxkucuk(a / 16);
		len += ft_forxkucuk(a % 16);
	}
	else if (a > 9)
	{
		len += ft_putchar(a - 10 + 'a');
	}
	else
		len += ft_putchar(a + '0');
	return (len);
}

int	ft_printptr(unsigned long long a)
{
	int	len;

	len = 0;
	if (a == 0)
	{
		len += ft_putstr("0x0");
	}
	else
	{
		len += ft_putstr("0x");
		len += ft_putptr(a);
	}
	return (len);
}
