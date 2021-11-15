#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
#include <stdarg.h>
# include "libft/libft.h"

void	ft_putchar(char c);
int		ft_print_c(char c);
int		ft_print_s(char *s);
char	*ft_itoa_16 (unsigned long long n);
int		ft_print_pointer(unsigned long long pointer);
int	ft_print_big_x(unsigned int n);
int	ft_print_x(unsigned int n);
int	ft_numlen(long long n);
int	ft_printf_unsgnd(unsigned int num);
int	ft_printf_decimal(int num);
//void	ft_putnumb(long n, char *str, int i);

#endif
