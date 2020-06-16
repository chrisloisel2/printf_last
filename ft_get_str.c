/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 03:43:53 by lchristo          #+#    #+#             */
/*   Updated: 2020/06/16 16:12:14 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_putstr(char *s, t_pft *one)
{
	int i;

	i = 0;
	if (s == NULL)
		ft_get_putstr("(null)", one);
	else
	{
		while (s[i] != '\0')
		{
			ft_get_putchar(s[i], one);
			i++;
		}
	}
	one->display = 's';
}

void	ft_get_putchar(char c, t_pft *one)
{
	char	string[2];

	string[0] = c;
	string[1] = '\0';
	ft_free_strjoin(one->result, (char *)string, &one->result);
	one->display = 'c';
}

void	ft_get_point(unsigned long p, t_pft *one)
{
	ft_get_putstr("0x", one);
	ft_get_puthexa(p, one);
	one->display = 'p';
}
