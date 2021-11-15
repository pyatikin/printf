#include <stdlib.h>
#include <unistd.h>
#include "ft_printf.h"
int	nbrlen(unsigned long long n)
{
	size_t	i;

	i = 1;
	while (n > 15)
	{
		n /= 16;
		i++;
	}
	return (i);
}

void	putnbr(unsigned long long n, char *str, int i)
{
	int	size;

	size = nbrlen(n) + i;
	while (n > 15)
	{
		if (n % 16 > 9)
			str[size - 1] = (n % 16) + 87;
		else
			str[size - 1] = (n % 16) + 48;
		n = n / 16;
		size--;
	}
	if (n < 9)
		str[i] = n + 48;
	else
		str[i] = n + 87;
}

char	*ft_itoa_16(unsigned long long n)
{
	char	*str;
	int		i;
	long	nbr;

	i = 0;
	nbr = n;
	str = malloc(nbrlen(nbr));
	if (!str)
		return (NULL);
	str[nbrlen(nbr)] = '\0';
	putnbr(nbr, str, i);
	return (str);
}

int	ft_print_big_x(unsigned int n)
{
	char	*out;
	int		i;

	i = -1;
	out = ft_itoa_16(n);
	while (i++ < nbrlen(n) - 1)
	{
		if (out[i] <= 122 && out[i] >= 97)
			out[i] = out[i] - 32;
		write(1, &out[i], 1);
	}
	free(out);
	return (i);
}

int	ft_print_x(unsigned int n)
{
	char	*out;
	int		i;

	i = -1;
	out = ft_itoa_16(n);
	while (i++ < nbrlen(n) - 1)
		write(1, &out[i], 1);
	free(out);
	return (i);
}

/*int main()
{
	ft_print_x(-1);
	ft_print_big_x(-1);
}*/
