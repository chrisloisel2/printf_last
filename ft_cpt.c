/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cpt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 21:01:35 by lchristo          #+#    #+#             */
/*   Updated: 2020/05/05 23:14:49 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "res.h"


int		ft_cpt2(const char *s, va_list ap, t_buffer *buf)
{
	int found;

	found = 0;
	if (ft_alpha(s[buf->i]))
	{
		buf->cpt2 = ft_atoi(s + buf->i);
		buf->i = buf->i + ft_intlen(buf->cpt1);
		buf->i += (ft_intlen(buf->cpt1) == 0) ? 1 : 0;
		found++;
	}
	else if (s[buf->i] == '*')
	{
		buf->cpt2 = ft_swap_star(ap, buf);
		found++;
	}
	if (buf->cpt2 < 0)
	{
		buf->cpt2 *= -1;
		buf->rb2 = 1;
	}
	if (buf->cpt2 == 0 && found != 0)
		buf->rb2 = -1;
	return (found);
}

int		ft_cpt1(const char *s, va_list ap, t_buffer *buf)
{
	int found;

	found = 0;
	if (ft_alpha(s[buf->i]))
	{
		buf->cpt1 = ft_atoi(s + buf->i);
		buf->i = buf->i + ft_intlen(buf->cpt1);
		buf->i += (ft_intlen(buf->cpt1) == 0) ? 1 : 0;
		found++;
	}
	else if (s[buf->i] == '*')
	{
		buf->cpt1 = ft_swap_star(ap, buf);
		found++;
	}
	if (buf->cpt1 < 0)
	{
		buf->cpt1 *= -1;
		buf->rb = 1;
	}
	if (buf->cpt1 == 0 && found != 0)
		buf->rb = -1;
	return (found);
}
