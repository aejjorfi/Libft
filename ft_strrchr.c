/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aejjorfi <aejjorfi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:16:13 by aejjorfi          #+#    #+#             */
/*   Updated: 2023/06/10 15:16:13 by aejjorfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;
	int			l;

	str = (const char *)s;
	l = ft_strlen(str) + 1;
	while (--l && *(str + l) != (char)c)
	{
	}
	if (*(str + l) == (char)c)
		return ((char *)str + l);
	return (NULL);
}
