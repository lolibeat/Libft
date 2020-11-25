/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreevey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 23:18:33 by rcreevey          #+#    #+#             */
/*   Updated: 2020/11/21 14:25:29 by rcreevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_checkset(char const smb, char const *set)
{
	while (*set != smb)
	{
		if (*set == '\0')
			return (0);
		set++;
	}
	return (1);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*str;

	if (!set || !s1)
		return (NULL);
	while (*s1 && ft_checkset(*s1, set))
		s1++;
	len = ft_strlen(s1);
	while ((ft_checkset(s1[len], set) && len))
		len--;
	str = ft_substr((char*)s1, 0, len + 1);
	return (str);
}
