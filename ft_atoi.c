/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreevey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:33:02 by rcreevey          #+#    #+#             */
/*   Updated: 2020/11/21 15:21:41 by rcreevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_atoi(const char *str)
{
	unsigned long long	res;
	int					minus;

	res = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if ((*str == '-' || *str == '+') &&
			(*(str + 1) >= '0') && (*(str + 1) <= '9'))
	{
		minus = (*str == '-') ? -1 : 1;
		str++;
	}
	if ((*str >= '0') && (*str <= '9'))
		while ((*str >= '0') && (*str <= '9'))
		{
			res = res * 10 + (*str - '0');
			str++;
			if ((res > 9223372036854775807 && minus < 0)
			|| res > 9223372036854775807)
				return ((res > 9223372036854775807 && minus < 0) ? 0 : -1);
		}
	else
		return (0);
	return ((minus == -1) ? res * -1 : res);
}
