/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 05:23:55 by lchristo          #+#    #+#             */
/*   Updated: 2020/04/23 05:12:46 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "res.h"

int		ft_cube(int n)
{
	int c;

	c = 1;
	while (n > 0)
	{
		c = c * 10;
		n--;
	}
	return (c);
}

int		ft_intlen(long c)
{
	int p;

	p = 0;
	while (c > 0)
	{
		c = c / 10;
		p++;
	}
	return (p);
}

void	ft_putnbr(int n, t_buffer *buf)
{
	int		len;
	long	nb;

	nb = (long)n;
	len = (nb < 0) ? ft_intlen(-nb) : ft_intlen(nb);
	(nb < 0) ? ft_add('-', &buf->str) : 0;
	(nb < 0) ? buf->negatif = 1 : 0;
	nb = (nb < 0) ? -nb : nb;
	(nb == 0) ? ft_add('0', &buf->str) : 0;
	while (len > 0)
	{
		len--;
		ft_add((nb / ft_cube(len) + 48), &buf->str);
		nb = nb % ft_cube(len);
	}
}

void	ft_putnbr2(int n, t_buffer *buf)
{
	int				len;
	unsigned int	nb;

	nb = n;
	(nb == 0) ? ft_add('0', &buf->str) : 0;
	len = (nb < 0) ? ft_intlen(-nb) : ft_intlen(nb);
	while (len > 0)
	{
		len--;
		ft_add((nb / ft_cube(len) + 48), &buf->str);
		nb = nb % ft_cube(len);
	}
}
