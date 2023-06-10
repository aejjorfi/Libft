/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aejjorfi <aejjorfi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:14:57 by aejjorfi          #+#    #+#             */
/*   Updated: 2023/06/10 15:14:58 by aejjorfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (!d && !s)
		return (NULL);
	if (s < d)
	{
		while (len--)
		*(d + len) = *(s + len);
	}
	else
	{
		ft_memcpy(d, s, len);
	}
	return (d);
}
