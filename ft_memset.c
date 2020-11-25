/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreevey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 22:38:04 by rcreevey          #+#    #+#             */
/*   Updated: 2020/11/20 22:39:26 by rcreevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *src, int smb, size_t val)
{
	size_t			i;
	unsigned char	*new;

	i = 0;
	new = (unsigned char*)src;
	while (i < val)
	{
		new[i] = smb;
		i++;
	}
	return (src);
}
