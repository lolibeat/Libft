/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreevey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 20:33:01 by rcreevey          #+#    #+#             */
/*   Updated: 2020/11/20 20:33:02 by rcreevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*total;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(total = (char *)malloc(sizeof(char) * i)))
		return (NULL);
	ft_bzero(total, i);
	i = 0;
	while (*s1)
	{
		total[i] = *s1;
		i++;
		s1++;
	}
	while (*s2)
	{
		total[i] = *s2;
		i++;
		s2++;
	}
	total[i] = '\0';
	return (total);
}
