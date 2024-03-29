/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreevey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 22:34:11 by rcreevey          #+#    #+#             */
/*   Updated: 2020/11/20 22:34:20 by rcreevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int nmb)
{
	return ((nmb >= '0' && nmb <= '9') ? 2048 : 0);
}
