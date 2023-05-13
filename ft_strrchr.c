
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	const char *str;
	int l;

	str = (const char *)s;
	l = ft_strlen(str) + 1;
	while (--l && *(str + l) != (char)c)
	{
	}
	if (*(str + l) == (char)c)
		return ((char *)str + l);
	return (NULL);
}
