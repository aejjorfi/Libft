#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		len;

	len = 0;
	if (!s || !f)
		return (NULL);
	while (s[len])
		len++;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	len = 0;
	while (s[len])
	{
		res[len] = f(len, s[len]);
		len++;
	}
	res[len] = '\0';
	return (res);
}
