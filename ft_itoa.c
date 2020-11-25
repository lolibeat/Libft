/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreevey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 12:58:49 by rcreevey          #+#    #+#             */
/*   Updated: 2020/11/23 13:22:12 by rcreevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_len(int num)
{
	int len;

	if (num == -2147483648)
		return (11);
	len = (num < 0) ? 1 : 0;
	num = (num < 0) ? num * -1 : num;
	while (num >= 10)
	{
		num /= 10;
		len++;
	}
	return (len + 1);
}

char			*ft_itoa(int n)
{
	char		*numstr;
	long int	len;
	long int	num;

	len = ft_len(n);
	if (!(numstr = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (n < 0)
		numstr[0] = '-';
	num = (n < 0) ? (long int)n * -1 : n;
	numstr[len] = '\0';
	len--;
	while (num >= 10)
	{
		numstr[len] = num % 10 + 48;
		num /= 10;
		len--;
	}
	numstr[len] = num % 10 + 48;
	return (numstr);
}
