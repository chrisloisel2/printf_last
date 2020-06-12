/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 01:38:40 by lchristo          #+#    #+#             */
/*   Updated: 2020/06/12 05:05:33 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void		ft_clean(t_pft *one)
{
	one->pres1 = 0;
	one->pres1neg = 0;
	one->pres2 = 0;
	one->pres2neg = 0;
	one->resultneg = 0;
	one->resaff = 0;
	one->flag = 0;
}

void		ft_var(const char *s, va_list *ap, t_pft *one)
{
	(s[one->index] == 'x') ? ft_puthexa(va_arg(*ap, long), one) : 0;
	(s[one->index] == 'X') ? ft_puthexa_maj(va_arg(*ap, long), one) : 0;
	(s[one->index] == 'u') ? ft_putu(va_arg(*ap, unsigned long), one) : 0;
	(s[one->index] == 'p') ? ft_point(va_arg(*ap, unsigned long), one) : 0;
	(s[one->index] == 'd') ? ft_putnbr(va_arg(*ap, int), one) : 0;
	(s[one->index] == 'i') ? ft_putnbr(va_arg(*ap, int), one) : 0;
	(s[one->index] == 's') ? ft_putstr(va_arg(*ap, char *), one) : 0;
	(s[one->index] == 'c') ? ft_putchar(va_arg(*ap, int), one) : 0;
	(s[one->index] == '%') ? ft_putchar('%', one) : 0;
	(s[one->index] == '*') ? ft_star(s, ap, one) : 0;
	(s[one->index] == '.') ? ft_dot(s, ap, one) : 0;
	(s[one->index] == '-') ? ft_minus(s, ap, one) : 0;
	(s[one->index] == '0') ? ft_zero(s, ap, one) : 0;
	(ft_alpha(s[one->index])) ? ft_star(s, ap, one) : 0;
	(s[one->index] == '\0') ? one->index-- : 0;
}

void	ft_detection(const char *s, va_list *ap, t_pft *one)
{
	one->index = 0;
	while (s[one->index] != '\0')
	{
		ft_clean(one);
		if (s[one->index] == '%')
		{
			one->index++;
			ft_var(s, ap, one);
		}
		else
			ft_putchar(s[one->index], one);
		one->index++;
	}
}

int			ft_printf(const char *s, ...)
{
	va_list		ap;
	t_pft		one;

	va_start(ap, s);
	one.cpt = 0;
	ft_detection(s, &ap, &one);
	va_end(ap);
	return (one.cpt);
}
