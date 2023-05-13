
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;

    i = 0;
    if(!s || start > ft_strlen(s))
        return (NULL);
    
    if(ft_strlen(s + start) < len)
        len = ft_strlen(s + start);
    
    substr = (char *)malloc( (len + 1) * sizeof(char));

    if(!substr)
        return (NULL);
    
    while(i < len)
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';
    return (substr);
}