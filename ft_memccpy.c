/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreevey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 23:10:19 by rcreevey          #+#    #+#             */
/*   Updated: 2020/11/20 23:11:11 by rcreevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	char			*dst_cpy;
	char			*src_cpy;
	unsigned int	symb;

	dst_cpy = (char *)dst;
	src_cpy = (char *)src;
	symb = (unsigned int)c;
	i = 0;
	while (i < n)
	{
		dst_cpy[i] = src_cpy[i];
		if (src_cpy[i] == (char)symb)
			return (&(((unsigned char*)dst)[i + 1]));
		i++;
	}
	return (NULL);
}
