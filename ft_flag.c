/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo </var/mail/lchristo>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/12 02:08:25 by lchristo          #+#    #+#             */
/*   Updated: 2020/06/16 00:17:21 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_flag(t_pft *one)
{
	if (one->flag == '.')
	{
		if (one->pres2neg == 0)
		{
			if (one->resultneg == 1 && one->resaff == 0)
				ft_cast_min(one);
			while (one->pres2-- > 0 && one->pres2neg == 0)
				ft_putchar('0', one);
		}
	}
	if (one->flag == '-')
	{
		if (one->pres2neg == 0)
		{
			if (one->resultneg == 1 && one->resaff == 0)
			{
				ft_cast_min(one);
				one->pres2--;
			}
			ft_putstr(one->result + one->decal, one);
			one->resaff = 1;
			while (one->pres2-- > 0 && one->pres2neg == 0)
				ft_putchar(' ', one);
		}
	}
}

int		ft_checkflag(char c)
{
	if (c == '.')
		return (1);
	if (c == '0')
		return (1);
	if (c == '-')
		return (1);
	return (0);
}
