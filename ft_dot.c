/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo </var/mail/lchristo>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 23:59:48 by lchristo          #+#    #+#             */
/*   Updated: 2020/06/12 02:15:14 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_dot(const char *s, va_list *ap, t_pft *one)
{
	one->r = 1;
	one->o = 1;
	one->index++;
	ft_get_all(s, ap, one);
	if (one->flag != 0)
		ft_flag(one);
	if (one->resultneg == 1)
	{
		ft_cast_min(one);
		one->pres1++;
	}
	while (one->pres1-- > 0 && one->pres1neg == 0)
		ft_putchar('0', one);
	ft_putstr(one->result + one->decal, one);
	free(one->result);
}
