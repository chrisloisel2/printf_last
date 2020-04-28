/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 14:15:37 by lchristo          #+#    #+#             */
/*   Updated: 2020/03/11 15:31:07 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "res.h"

long		ft_cube2(int len)
{
	long unsigned c;

	c = 1;
	while (len > 0)
	{
		c = c * 16;
		len--;
	}
	return (c);
}

int			ft_intlen2(long c)
{
	int p;

	p = 0;
	while (c > 0)
	{
		c = c / 16;
		p++;
	}
	return (p);
}

t_buffer	ft_divide(t_buffer val)
{
	while (val.div >= 16)
	{
		val.div = val.div / 16;
		val.modulo = val.modulo * 16;
	}
	return (val);
}

void		ft_putnbr3(void *n, t_buffer *buf)
{
	long	nb;
	int		len;

	nb = (long)n;
	len = ft_intlen2(nb) - 1;
	while (len >= 0)
	{
		if ((nb / ft_cube2(len) <= 16) && (nb / ft_cube2(len) > 9))
			ft_add((nb / ft_cube2(len) + 'W'), &buf->str);
		else
			ft_add((nb / ft_cube2(len) + '0'), &buf->str);
		nb = nb % ft_cube2(len);
		len--;
	}
}

void		ft_putnbr4(void *n, t_buffer *buf)
{
	int		len;
	long	nb;

	if ((long)n < 0)
		nb = (long)n * (-1);
	else
		nb = (long)n;
	len = (nb < 0) ? (ft_intlen2(-nb) - 1) : (ft_intlen2(nb) - 1);
	while (len >= 0)
	{
		if ((nb / ft_cube2(len) <= 16) && (nb / ft_cube2(len) > 9))
			ft_add((nb / ft_cube2(len) + 55), &buf->str);
		else
			ft_add((nb / ft_cube2(len) + '0'), &buf->str);
		nb = nb % ft_cube2(len);
		len--;
	}
}
