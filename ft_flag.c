/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo </var/mail/lchristo>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/12 02:08:25 by lchristo          #+#    #+#             */
/*   Updated: 2020/06/12 03:03:44 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_flag(t_pft *one)
{
	if (one->flag == '.')
	{
		if (one->pres2neg == 0)
		{
			if (one->resultneg == 1)
			{
				ft_putchar('-', one);
				one->resultneg = 0;
				one->decal = 1;
			}
			while (one->pres2-- > 0 && one->pres2neg == 0)
				ft_putchar('0', one);
		}
//		else
//		{
//			ft_putstr(one->result, one);
//			one->resaff = 1;
//			while (one->pres2-- > 0)
//				ft_putchar(' ', one);
//		}
	}
}
