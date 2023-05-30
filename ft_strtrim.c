
#include "libft.h"

int check(char c, const char *s)
{
    while (*s)
    {
        if (*s == c)
            return (1);
        s++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *res;
    int debut;
    int fin;
    int i;

    debut = 0;
    fin = 0;
    i = 0;

    if (!s1 || !set)
        return (NULL);

    while (s1[debut] && check(s1[debut], set))
        debut++;

    fin = debut;

    while (s1[fin])
        fin++;

    while (check(s1[fin - 1], set) && debut < fin)
        fin--;

    res = (char *)malloc((fin - debut + 1) * sizeof(char));

    if (!res)
        return (NULL);

    while (i < fin - debut)
    {
        res[i] = s1[debut + i];
        i++;
    }
    res[fin - debut] = '\0';
    return res;
}