/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_star.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 00:28:25 by lchristo          #+#    #+#             */
/*   Updated: 2020/06/11 03:40:55 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_star(const char *s, va_list *ap,  t_pft *one)
{
	ft_get_pres1(s, ap, one);
	ft_get_flag(s, ap, one);
	ft_get_pres2(s, ap, one);
	ft_get_var(s, ap, one);
	if (one->pres1neg == 0)
	{
		while (one->pres1-- > 0)
			ft_putchar(' ', one);
//		ft_var(s, ap, one);
	}
	else
	{
//		ft_var(s, ap, one);
		while (one->pres1-- > 0)
			ft_putchar(' ', one);
	}
}
