#include "stdio.h"
#include "ft_printf.h"
void	ft_putnumb(long n, char *str, int i)
{
	int	size;

	size = ft_numlen(n) + i;
	str[size]='\0';
	while (n > 9)
	{
		str[--size] = (n % 10) + 48;
		n = n / 10;
	}
	str[i] = n + 48;
	
}

static char	*ft_itoa_unsgnd(unsigned int n)
{
	char	*str;
	int		i;
	long	num;

	i = 0;
	num = n;
	str = malloc(ft_numlen(num) + 1);
	if (!str)
		return (NULL);
	ft_putnumb(num, str, i);
	return (str);
}

int	ft_printf_unsgnd(unsigned int num)
{
	ft_putstr_fd(ft_itoa_unsgnd(num), 1);
	return (ft_numlen((num)));
}

/*int main()
{
	long long tst = -4294967295;
	int tst1 = ft_printf_unsgnd(tst);
	printf("%i", tst1);
}
 */
