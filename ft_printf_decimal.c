#include "stdio.h"
#include "ft_printf.h"
int	ft_numlen(long long n)
{
	size_t	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_printf_decimal(int num)
{
	ft_putnbr_fd(num, 1);
	return (ft_numlen((long)(num)));
}

/*int main()
{
	int tst = 4294967295;
	int tst1 = ft_printf_unsgnd(tst);
	printf("%i", tst1);
}
*/
