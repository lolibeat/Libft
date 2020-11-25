/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreevey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 22:22:43 by rcreevey          #+#    #+#             */
/*   Updated: 2020/11/20 22:24:40 by rcreevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int num, int fd)
{
	if (num == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (num < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-num, fd);
	}
	else
	{
		if (num / 10)
			ft_putnbr_fd(num / 10, fd);
		ft_putchar_fd(num % 10 + '0', fd);
	}
}
