/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zero.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo </var/mail/lchristo>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/12 01:34:35 by lchristo          #+#    #+#             */
/*   Updated: 2020/06/12 01:57:13 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_zero(const char *s, va_list *ap, t_pft *one)
{
	one->index++;
	ft_get_all(s, ap, one);
	if (one->pres1neg)
	{
		ft_putstr(one->result, one);
		while (one->pres1-- > 0)
			ft_putchar(' ', one);
	}
	else
	{
		if (one->resultneg == 1)
			ft_putchar('-', one);
		while (one->pres1-- > 0)
			ft_putchar('0', one);
		ft_putstr(one->result + one->resultneg, one);
	}
	free(one->result);
}
