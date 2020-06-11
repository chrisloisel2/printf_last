/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo </var/mail/lchristo>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/12 01:20:23 by lchristo          #+#    #+#             */
/*   Updated: 2020/06/12 01:57:09 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_minus(const char *s, va_list *ap, t_pft *one)
{
	one->index++;
	ft_get_all(s, ap, one);
	ft_putstr(one->result, one);
	while (one->pres1-- > 0)
		ft_putchar(' ', one);
	free(one->result);
}
