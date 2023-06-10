/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aejjorfi <aejjorfi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:15:02 by aejjorfi          #+#    #+#             */
/*   Updated: 2023/06/10 15:15:03 by aejjorfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int v, size_t c)
{
	unsigned char	*b;

	b = p;
	while (c--)
	{
		*b = (unsigned char)v;
		b++;
	}
	return (p);
}
