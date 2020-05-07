/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 05:23:55 by lchristo          #+#    #+#             */
/*   Updated: 2020/05/07 18:46:32 by lchristo         ###   ########.fr       */
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

void	ft_zeru(t_buffer *buf, const char *s)
{
	if (!(s[buf->i - 1] == '.' || (s[buf->i - 2] == '.' && s[buf->i - 1] == '0')))
	{
		ft_add('0', &buf->str);
	}
}

void	ft_putnbr(int n, t_buffer *buf, const char *s)
{
	int		len;
	long	nb;

	nb = 0;
	nb = (long)n;
	len = (nb < 0) ? ft_intlen(-nb) : ft_intlen(nb);
	(nb < 0) ? ft_add('-', &buf->str) : 0;
	(nb < 0) ? buf->negatif = 1 : 0;
	nb = (nb < 0) ? -nb : nb;
	(nb == 0) ? ft_zeru(buf, s) : 0;
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
	len = ft_intlen(nb);
	(nb == 0) ? ft_add('0', &buf->str) : 0;
	while (len > 0)
	{
		len--;
		ft_add((nb / ft_cube(len) + 48), &buf->str);
		nb = nb % ft_cube(len);
	}
}
