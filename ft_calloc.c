/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreevey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 22:29:42 by rcreevey          #+#    #+#             */
/*   Updated: 2020/11/20 22:30:26 by rcreevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t			i;
	unsigned char	*meow;

	i = 0;
	meow = malloc(num * size);
	if (!meow)
		return (NULL);
	while (i < (num * size))
	{
		meow[i] = '\0';
		i++;
	}
	return (meow);
}
