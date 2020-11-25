/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreevey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 23:01:20 by rcreevey          #+#    #+#             */
/*   Updated: 2020/11/20 23:26:39 by rcreevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int symbol)
{
	int		i;
	char	*result;

	i = 0;
	if (symbol == 0)
	{
		while (str[i] != 0)
			i++;
		result = &((char *)str)[i];
		return (result);
	}
	while (str[i])
	{
		if (str[i] != symbol)
			i++;
		else
		{
			result = &((char *)str)[i];
			return (result);
		}
	}
	return (NULL);
}
