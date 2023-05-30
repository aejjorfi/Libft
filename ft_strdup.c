#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*cpy;
	int		i;
	int		len_src;

	i = 0;
	len_src = ft_strlen(src);
	cpy = (char *)malloc(len_src + 1);
	if (!cpy)
		return (NULL);
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	*(cpy + len_src) = '\0';
	return (cpy);
}
