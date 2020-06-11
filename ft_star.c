/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_star.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 00:28:25 by lchristo          #+#    #+#             */
/*   Updated: 2020/06/12 00:02:24 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_star(const char *s, va_list *ap,  t_pft *one)
{
	ft_get_all(s, ap, one);
	if (one->pres1neg == 0)
	{
		while (one->pres1-- > 0)
			ft_putchar(' ', one);
		ft_putstr(one->result, one);
	}
	else
	{
		ft_putstr(one->result, one);
		while (one->pres1-- > 0)
			ft_putchar(' ', one);
	}
}
