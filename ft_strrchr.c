/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreevey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 23:04:07 by rcreevey          #+#    #+#             */
/*   Updated: 2020/11/20 23:04:49 by rcreevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int symbol)
{
	int		i;
	char	*result;

	i = 0;
	while (str[i])
		i++;
	while (str[i] != symbol && i >= 0)
		i--;
	if (str[i] == symbol)
	{
		result = &str[i];
		return (result);
	}
	return (NULL);
}
