/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreevey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 15:40:53 by rcreevey          #+#    #+#             */
/*   Updated: 2020/11/19 15:43:20 by rcreevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	check;

	i = 0;
	if (!find[i])
		return ((char *)str);
	while (str[i] && i < len)
	{
		check = 0;
		if (str[i] == find[check])
			while (str[i + check] == find[check] && i + check < len)
			{
				check++;
				if (find[check] == '\0')
					return (&(((char *)str)[i]));
			}
		i++;
	}
	return (NULL);
}
