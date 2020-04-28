/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 14:15:37 by lchristo          #+#    #+#             */
/*   Updated: 2019/12/10 05:13:53 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "res.h"

void	ft_puthexmaj(long nb)
{
	long i;

	i = nb;
	if (i > 16)
	{
		ft_puthexmaj(i / 16);
		ft_puthexmaj(i % 16);
	}
	else
	{
		if (i <= 16 && i >= 10)
			ft_putchar(i + 55);
		else
			ft_putchar(i + '0');
	}
}
