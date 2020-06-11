/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_star.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 00:28:25 by lchristo          #+#    #+#             */
/*   Updated: 2020/06/11 05:12:18 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_star(const char *s, va_list *ap,  t_pft *one)
{
	ft_get_all(s, ap, one);
//	printf("->%d\n->%d\n->%c\n->(%s)\n", one->pres1, one->pres2, one->flag, one->result);
	if (one->pres1neg == 0)
	{
		while ((one->pres1-- - ft_strlen(one->result)) > 0)
			ft_putchar(' ', one);
		ft_putstr(one->result, one);
	}
	else
	{
		ft_putstr(one->result, one);
		while ((one->pres1-- - ft_strlen(one->result)) > 0)
			ft_putchar(' ', one);
	}
}
