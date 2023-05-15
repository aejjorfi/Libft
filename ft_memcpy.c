
#include "libft.h"

void *ft_memcpy(void * dst, const void * src, size_t n)
{
    char * d = dst;
    const char * s = src;

    
    if(!s && !d)
        return (NULL);
    while (n--)
    {
        *d++ = *s++;
    }
    return(d);
}