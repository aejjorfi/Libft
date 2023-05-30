#include "libft.h"

void	*ft_memset(void *p, int v, size_t c)
{
	unsigned char	*b;

	b = p;
	while (c--)
	{
		*b = (unsigned char)v;
		b++;
	}
	return (b);
}
