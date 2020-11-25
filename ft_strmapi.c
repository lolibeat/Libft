/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreevey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 23:06:52 by rcreevey          #+#    #+#             */
/*   Updated: 2020/11/20 23:08:58 by rcreevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*new;
	char	*s1;

	s1 = (char *)s;
	i = 0;
	if (!s1 || !f)
		return (NULL);
	if ((new = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1))) == NULL)
		return (NULL);
	while (s1[i])
	{
		new[i] = f(i, s1[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
