#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_putnbr(int n);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putptr(unsigned long long a);
int		ft_putunsigned(unsigned int n);
int		ft_printptr(unsigned long long a);
int		ft_formatcheck(const char *str, va_list args);
int		ft_bigx(unsigned int a);
int		ft_forxkucuk(unsigned int a);
#endif
