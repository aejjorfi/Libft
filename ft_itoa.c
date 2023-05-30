#include "libft.h"

int	len_calc(int n)
{
	int	cpt;

	cpt = 1;
	if (n < 0)
		cpt ++;
	while (n >= 10)
	{
		n /= 10;
		cpt++;
	}
	return (cpt);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	len = len_calc(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		n = -n;
	}
	res[len] = '\0';
	while (n > 0)
	{
		len--;
		res[len] = (n % 10) + '0';
		n /= 10;
	}
	return (res);
}
