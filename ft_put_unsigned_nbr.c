/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 06:03:48 by lchristo          #+#    #+#             */
/*   Updated: 2020/02/16 16:46:31 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "res.h"

char	ft_put_unsigned_nbr(long nbr, t_buffer buf)
{
	long i;

	i = nbr;
	if (i < 0)
		i = i * (-1);
	if (i > 9)
	{
		ft_put_unsigned_nbr((i / 10), buf);
		ft_put_unsigned_nbr((i % 10), buf);
	}
	else
	{
		ft_putchar(i + '0');
	}
	return ((i + '0'));
}
