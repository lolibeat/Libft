/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreevey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 22:59:57 by rcreevey          #+#    #+#             */
/*   Updated: 2020/11/20 23:01:01 by rcreevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int    ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	all;

	all = 0;
	while (((char *)dst)[all] && all < size)
		all++;
	i = all;
	while (((char *)src)[all - i] && all + 1 < size)
	{
		((char *)dst)[all] = ((char *)src)[all - i];
		all++;
	}
	if (i < size)
		dst[all] = '\0';
	return (i + ft_strlen((char *)src));
}

