/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo </var/mail/lchristo>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 22:57:15 by lchristo          #+#    #+#             */
/*   Updated: 2020/06/11 23:53:10 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_calculus(t_pft *one)
{
	int cp;

	cp = 0;
	(one->pres2 == 1) ? one->pres2 = 0 : 0;
	cp = ft_strlen(one->result) - one->resultneg;
//	printf("\npres->[%d][%d]flag->[%c]result->(%s)||\n", one->pres1, one->pres2, one->flag, one->result);
//	printf("\n[%d]flag->[%c]result->(%s)||\n", one->resultneg, one->flag, one->result);
	if (one->pres1 > 0)
		one->pres1 -= one->resultneg;
	one->pres1 -= one->pres2;
	if (one->pres2 > cp)
		one->pres2 -= cp;
	else
	{
		while (one->pres2 > 0 && cp > 0)
		{
			one->pres2--;
			cp--;
		}
		(one->pres1 > one->pres2) ? one->pres1 -= cp : 0;
	}
}
