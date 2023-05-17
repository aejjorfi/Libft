
#include "libft.h"

int len_calc(int n)
{
    int cpt;

    cpt = 1;
    while (n >= 10)
    {
        n /= 10;
        cpt++;
    }

    return cpt;
}

char *ft_itoa(int n)
{
    char *res;
    int len;
    int signe = 1;

    if (n = -2147483648)
        return ("-2147483648");

    len = len_calc(n);

    if (n < 0)
    {
        n = -n;
        len++;
        signe = -1
    }
    res = (char *)malloc(sizeof(char) * (len + 1));

    if (!res)
        return (NULL);

    if (n == 0)
    {
        res[0] = '0';
        res[1] = '\0';
        return (res);
    }

    res[len] = '\0';
    while (n > 0)
    {
        res[--len] = (n % 10) + '0';
        n /= 10;
    }
    if (signe == -1)
        res[--len] = '-';
    return (res);
}
