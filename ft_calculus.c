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
	int p1;
	int p2;

	p1 = (one->pres1neg) ? -one->pres1 : one->pres1;
	p2 = (one->pres2neg) ? -one->pres2 : one->pres2;
	cp = 0;
	(one->pres2neg == 1) ? one->pres2 = 0 : 0;
	cp = ft_strlen(one->result) - one->resultneg;
	if (cp < one->pres1 || cp < one->pres2)
	{
		if (one->pres1 > 0)
			one->pres1 -= one->resultneg;
		if (p2 > 0)
		{
			one->pres2 -= cp;
			if (one->pres2 < 0)
				one->pres1 += one->pres2;
		}
		one->pres1 -= one->pres2 + cp;
	}
	else
	{
		one->pres1 = 0;
		one->pres2 = 0;
	}
}
