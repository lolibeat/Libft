/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreevey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 22:51:20 by rcreevey          #+#    #+#             */
/*   Updated: 2020/11/20 22:56:24 by rcreevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	char	*arr2;
	size_t	i;

	arr2 = (char *)arr;
	i = 0;
	if ((char)c == '\0')
		while (i < n)
		{
			if (arr2[i] == (char)c)
				return (&(arr2[i]));
			else
				i++;
		}
	while (i < n && arr2[i])
	{
		if (arr2[i] != (char)c)
			++i;
		else
			return (&(arr2[i]));
	}
	return (NULL);
}
