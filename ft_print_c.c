#include <unistd.h>
#include "ft_printf.h"
void	ft_putchar(char c)
{
	write(1, &c, sizeof(c));
}

int	ft_print_c(char c)
{
	int	i;

	i = 0;
	ft_putchar(c);
	return (i + 1);
}
