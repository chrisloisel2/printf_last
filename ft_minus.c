/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo </var/mail/lchristo>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/12 01:20:23 by lchristo          #+#    #+#             */
/*   Updated: 2020/06/12 02:51:02 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_minus(const char *s, va_list *ap, t_pft *one)
{
	one->index++;
	ft_get_all(s, ap, one);
	if (one->flag != 0)
		ft_flag(one);
	if (one->resaff == 0)
		ft_putstr(one->result + one->decal, one);
	while (one->pres1-- > 0)
		ft_putchar(' ', one);
	free(one->result);
}

void	ft_cast_min(t_pft *one)
{
	ft_putchar('-', one);
	one->decal = 1;
	one->resultneg = 0;
}

void	ft_cast(t_pft *one)
{
	int i;
	int y;

	y = one->truepres1;
	i = 0;
	if (y < 0)
		ft_putstr(one->result, one);
	while (y-- > 0)
	{
		if (one->flag == '.')
			ft_putchar(' ', one);
		else
			ft_putchar(one->result[i], one);
		i++;
	}
}
