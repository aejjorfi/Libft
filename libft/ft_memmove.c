#include "libft.h"
void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *d = dst;
    const char *s = src;

    if(!d && !s)
        return(NULL);
    if ( s < d )
    {
        while (len--)
            *(d+len) = *(s+len);
    }
    else 
    {
        while (len--)
            *d++ = *s++;
    }
    return (d);
}
#include <stdio.h>
#include <string.h>
int main(void)
{

        char s[] = {65, 66, 67, 68, 69, 0, 45};
        char s0[] = { 0,  0,  0,  0,  0,  0, 0};
        char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
        char sResult[] = {67, 68, 67, 68, 69, 0, 45};
        char sResult2[] = {67, 67, 68, 68, 69, 0, 45};

        printf ("%d" ,ft_memmove(s0, s, 7) == s0 && !memcmp(s, s0, 7));
        printf ("%d" ,ft_memmove(s, s + 2, 0) && !memcmp(s, sCpy, 7));
        printf ("%d" ,ft_memmove(s, s + 2, 2) == s && !memcmp(s, sResult, 7));
        printf ("%d" ,ft_memmove(sResult + 1, sResult, 2) == sResult + 1 && !memcmp(sResult, sResult2, 7));
        write(1, "\n", 1);
        return (0);
}