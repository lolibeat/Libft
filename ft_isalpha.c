/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreevey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 22:32:04 by rcreevey          #+#    #+#             */
/*   Updated: 2020/11/20 22:32:56 by rcreevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int smbl)
{
	return (((smbl >= 'a' && smbl <= 'z') ||
				(smbl >= 'A' && smbl <= 'Z')) ? 2 : 0);
}
