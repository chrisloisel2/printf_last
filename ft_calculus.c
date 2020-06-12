/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo </var/mail/lchristo>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 22:57:15 by lchristo          #+#    #+#             */
/*   Updated: 2020/06/12 03:38:59 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_calculus(t_pft *one)
{
	int cp;

	cp = 0;
	(one->pres2 == 1) ? one->pres2 = 0 : 0;
	cp = ft_strlen(one->result) - one->resultneg;
	if (one->pres1 > 0)
		one->pres1 -= one->resultneg;
	if (one->pres2neg == 0)
		one->pres1 -= one->pres2;
	if (one->pres2 > one->pres1 && one->pres2neg == 0)
	{
		one->pres2 -= cp;
	}
	else
	{
		while (one->pres2 > 0 && cp > 0 && one->pres2neg == 0)
		{
			one->pres2--;
			cp--;
		}
	//	printf("%d, %d", one->pres1, one->pres2);
//		if (one->pres1 >= one->pres2)
//			one->pres1 -= cp;
//		else if (one->pres1neg == 0 && one->pres2neg == 1)
			one->pres1 -= cp;
	}
}
