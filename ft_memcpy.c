/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreevey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 22:40:03 by rcreevey          #+#    #+#             */
/*   Updated: 2020/11/20 22:41:00 by rcreevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t num)
{
	size_t				i;
	unsigned char		*source;
	unsigned char		*dest;

	source = (unsigned char*)src;
	dest = (unsigned char*)dst;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < num)
	{
		dest[i] = source[i];
		++i;
	}
	return (dst);
}
