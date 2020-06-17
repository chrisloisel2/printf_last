/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/12 01:34:35 by lchristo          #+#    #+#             */
/*   Updated: 2020/06/17 01:43:21 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_zero(const char *s, va_list *ap, t_pft *one)
{
	one->index++;
	ft_get_all(s, ap, one);
	if (one->pres1neg)
	{
		if (one->resultneg == 1 && one->truepres2 < 0)
			ft_cast_min(one);
		if (one->flag != 0)
			ft_flag(one);
		if (one->resaff == 0)
			ft_putstr(one->result + one->decal, one);
		while (one->pres1-- > 0)
			ft_putchar(' ', one);
	}
	else
	{
		if (one->resultneg == 1 && (one->truepres2 < 0 || one->p2 == 0))
			ft_cast_min(one);
		while (one->pres1-- > 0)
			ft_putchar((one->truepres2 < 0 || one->p2 == 0) ? '0' : ' ', one);
		if (one->flag != 0)
			ft_flag(one);
		if (one->resaff == 0)
			ft_putstr(one->result + one->decal, one);
	}
	free(one->result);
}

void	ft_zerosuppr(t_pft *one)
{
	if (ft_strlen(one->result) == 1 && one->result[0] == '0')
	{
		if (one->display != 's' && one->display != 'c')
		{
			if ((one->p2 == 0 || one->truepres2 == 0) && one->flag == '.')
				one->result[0] = '\0';
			if ((one->truepres1 == 0 || one->p1 == 0) && one->dot == 1)
				one->result[0] = '\0';
		}
	}
	if (ft_strlen(one->result) == 3 && one->result[2] == '0')
	{
		if (one->display == 'p')
		{
			if ((one->p2 == 0 || one->truepres2 == 0) && one->flag == '.')
				one->result[2] = '\0';
			if ((one->truepres1 == 0 || one->p1 == 0) && one->dot == 1)
				one->result[2] = '\0';
		}
	}
}
