#include "libft.h"
char *ft_strchr(const char *s, int c)
{
    const char *str = s;
    while (*str != (char)c)
    {
        if (*str == '\0')
            return 0;
        str++;
    }
    return (char *)str;
}