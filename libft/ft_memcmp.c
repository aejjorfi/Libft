#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
    while (n >0)
    {
        if(*str1 != *str2)
            return (*str1 - *str2);
        str1++;
        str2++;
        n--;
    }
    return (0);
    
}