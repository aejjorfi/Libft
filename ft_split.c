#include "libft.h"

int	mot(const char *s, char c)
{
	int	cpt;

	cpt = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			cpt++;
			while (*s && *s != c)
				s++;
		}
	}
	return (cpt);
}

char	*copie(const char *s, char c)
{
	int		len;
	char	*mot;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	mot = (char *)malloc(sizeof(char) * (len + 1));
	if (!mot)
		return (NULL);
	len = 0;
	while (*s && *s != c)
	{
		mot[len] = *s;
		len++;
		s++;
	}
	mot[len] = '\0';
	return (mot);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		mots;

	i = 0;
	mots = mot(s, c);
	res = (char **)malloc(sizeof(char *) * (mots + 1));
	if (!res)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			res[i] = copie(s, c);
			if (!res[i])
			{
				while (i--)
					free(res[i]);
				free(res);
				return (NULL);
			}
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	res[i] = (NULL);
	return (res);
}
