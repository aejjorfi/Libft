/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aejjorfi <aejjorfi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:15:35 by aejjorfi          #+#    #+#             */
/*   Updated: 2023/06/10 15:15:35 by aejjorfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*cpy;
	int		i;
	int		len_src;

	i = 0;
	len_src = ft_strlen(src);
	cpy = (char *)malloc(len_src + 1);
	if (!cpy)
		return (NULL);
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	*(cpy + len_src) = '\0';
	return (cpy);
}
