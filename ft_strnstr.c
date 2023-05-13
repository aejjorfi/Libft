#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int j;
    int i;
    char *help;

    i = 0;
    j = 0;
    if (needle[0] == '\0')
    {
        return (haystack);
    }
    while (haystack[i] && i < len)
    {
        if (haystack[i] == needle[j])
        {
            if (j == 0)
                help = &haystack[i];
            if (needle[j + 1] == '\0')
                return (help);
            j++;
        }
        else
            j = 0;
        i++;
    }
    return (0);
}