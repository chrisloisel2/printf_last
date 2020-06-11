/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 03:43:53 by lchristo          #+#    #+#             */
/*   Updated: 2020/06/11 03:45:13 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_putstr(char *s, t_pft *one)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_get_putchar(s[i], one);
		i++;
	}
}

void	ft_get_putchar(char c, t_pft *one)
{
		
	one->cpt++;
}

void		ft_get_point(unsigned long p, t_pft *one)
{
	ft_putstr("0x", one);
	ft_puthexa(p, one);
}
