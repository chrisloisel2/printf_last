/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo </var/mail/lchristo>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/12 01:34:35 by lchristo          #+#    #+#             */
/*   Updated: 2020/06/12 02:15:36 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_zero(const char *s, va_list *ap, t_pft *one)
{
	one->index++;
	ft_get_all(s, ap, one);
	if (one->flag != 0)
		ft_flag(one);
	if (one->pres1neg)
	{
		ft_putstr(one->result + one->decal, one);
		while (one->pres1-- > 0)
			ft_putchar(' ', one);
	}
	else
	{
		if (one->resultneg == 1)
		{
			ft_putchar('-', one);
			one->decal = 1;
		}
		while (one->pres1-- > 0)
			ft_putchar('0', one);
		ft_putstr(one->result + one->decal, one);
	}
	free(one->result);
}

void	ft_zerosupp(t_pft *one)
{
	if (ft_strlen(one->result) == 1 && one->result[0] == '0')
	{
		if (one->p1 == 0 || one->pres1 == 0)
			if ((one->p2 == 0 || one->pres2 == 0))
				       if (one->flag == '.' || one->r == 1)
				one->result[0] = '\0';
	}
}
