/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aejjorfi <aejjorfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 01:18:37 by aejjorfi          #+#    #+#             */
/*   Updated: 2023/05/05 01:18:38 by aejjorfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;
	int			l ;

	str = (const char *) s;
	l = ft_strlen(str) + 1;
	while (--l && *(str + l) != (char) c)
	{
	}
	if (*(str + l) == (char) c)
		return ((char *) str + l);
	return (NULL);
}
