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
//	printf("pres[%d][%d], flag[%c], presneg[%d][%d]\n", one->pres1, one->pres2, one->flag, one->pres1neg, one->pres2neg);
	if (one->flag == '.')
	{
		if (one->pres2neg == 0)
		{
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
