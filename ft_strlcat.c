/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aejjorfi <aejjorfi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:15:48 by aejjorfi          #+#    #+#             */
/*   Updated: 2023/06/10 15:23:45 by aejjorfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (!size)
		return (len_src);
	i = 0;
	if (size > 0)
	{
		while (src[i] && (len_dst + i) < size - 1)
		{
			dst[len_dst + i] = src[i];
			i++;
		}
		dst[len_dst + i] = '\0';
	}
	if (size < len_dst)
		return (len_src + size);
	else
		return (len_dst + len_src);
}
