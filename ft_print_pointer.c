#include "ft_printf.h"
#include <stdio.h>
int	ft_print_pointer(unsigned long long pointer)
{
	int		i;
	char	*s;

	i = 2;
	
	s = ft_itoa_16(pointer);
	ft_print_s("0x");
	//printf("%s\n", s);
	i += ft_print_s(s);
	free(s);
	return (i);
}
