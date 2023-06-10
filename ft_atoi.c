/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aejjorfi <aejjorfi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:11:57 by aejjorfi          #+#    #+#             */
/*   Updated: 2023/06/10 15:11:57 by aejjorfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	const char	*local_str;
	int			signe;
	int			decimal;

	local_str = str;
	signe = 1;
	decimal = 0;
	while (*local_str == 32 || (*local_str >= 9 && *local_str <= 13))
		local_str++;
	if (*local_str == '-' || *local_str == '+')
	{
		if (*local_str == '-')
			signe = -signe;
		local_str++;
	}
	while (*local_str >= 48 && *local_str <= 57)
	{
		decimal = (decimal * 10) + (*local_str - 48);
		local_str++;
	}
	decimal *= signe;
	return (decimal);
}
