#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (!d && !s)
		return (NULL);
	if (s < d)
	{
		while (len--)
		*(d + len) = *(s + len);
	}
	else
	{
		ft_memcpy(d, s, len);
	}
	return (d);
}
