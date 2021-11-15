#include "ft_printf.h"
#include <stdio.h>
int	ft_print_s(char *s)
{
	int	i;
	
	i = 0;
	if (!s)
		s = ft_strdup("(null)");
	while (*s)
	{
		ft_putchar(*s);
		s++;
		i++;
	}
//	free(s);
	return (i);
}
