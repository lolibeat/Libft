/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreevey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 20:04:23 by rcreevey          #+#    #+#             */
/*   Updated: 2020/11/23 13:13:45 by rcreevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	cp;
	char			*meow;

	cp = 0;
	if (!s)
		return (NULL);
	if ((int)start >= ft_strlen((char *)s))
	{
		if (!(meow = (char *)malloc(sizeof(char))))
			return (NULL);
		meow[0] = '\0';
		return (meow);
	}
	if (!(meow = malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = start;
	while ((s[i] && cp < len))
	{
		meow[cp] = s[i];
		cp++;
		i++;
	}
	meow[cp] = '\0';
	return (meow);
}
