#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_printf.h"
int	ft_printf(const char *input, ...);
int	main(void)
{
	//char a = '1';
	//char *n = &a;
	//printf("%x\n", -1);
	//write(1, &n, sizeof(n));
	//ft_printf_pointer((unsigned long long)n);
	//unsigned long long i = 0;
	//i--;
	ft_printf("%u", -1);
	printf("%u", -1);
	//printf("%t ");
	return (0);
}
