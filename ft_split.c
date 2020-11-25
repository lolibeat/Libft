/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreevey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 20:39:17 by rcreevey          #+#    #+#             */
/*   Updated: 2020/11/21 19:27:21 by rcreevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_str_c(const char *s, char c)
{
	size_t	num_str;
	char	*a;

	a = (char*)s;
	num_str = 0;
	while (*a != '\0')
	{
		if (*a != c)
			num_str++;
		while (*a != c && *a != '\0')
			a++;
		while (*a == c && *a != '\0')
			a++;
	}
	return (num_str);
}

static	char	**ft_free(size_t a, char **splitall)
{
	while (a--)
		free(&splitall[a]);
	free(splitall);
	return (NULL);
}

static	void	ft_ready(char *str, const char *s, int word)
{
	while (word--)
		*str++ = *s++;
	*str = '\0';
	return ;
}

static	int		ft_clet(const char *s, char c)
{
	int		word;

	word = 0;
	while (*s != c && *s != '\0')
	{
		s++;
		word++;
	}
	return (word);
}

char			**ft_split(char const *s, char c)
{
	char	**splitall;
	size_t	a;
	char	*j;

	j = (char*)s;
	a = 0;
	if (!s || !(splitall = (char **)malloc(sizeof(char*)
					* (ft_str_c(s, c) + 1))))
		return (NULL);
	while (a != ft_str_c(j, c))
	{
		while (*s == c)
			s++;
		if (!(splitall[a] = (char *)malloc(sizeof(char) * ft_clet(s, c) + 1)))
			return (ft_free(a, splitall));
		ft_ready(splitall[a], s, ft_clet(s, c));
		while (*s != c && *s != '\0')
			s++;
		a++;
	}
	splitall[a] = NULL;
	return (splitall);
}
