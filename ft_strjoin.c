#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    char *res;

    i = 0;

    if (!s1 || !s2)
        return (NULL);

    res = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));

    if (!res)
        return (NULL);

    while (*s1)
        res[i++] = *s1++;
    while (*s2)
        res[i++] = *s2++;
    res[i] = '\0';
    return res;
}