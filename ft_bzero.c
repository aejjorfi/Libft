#include "libft.h"

void	ft_bzero(void *p, size_t c)
{
	unsigned char	*b;

	b = p;
	while (c--)
	{
		*b = 0;
		b++;
	}
}
