/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreevey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 22:35:18 by rcreevey          #+#    #+#             */
/*   Updated: 2020/11/20 22:35:24 by rcreevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int smb)
{
	return ((smb >= 'a' && smb <= 'z') ? smb - 32 : smb);
}