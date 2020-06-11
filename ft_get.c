/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 00:29:23 by lchristo          #+#    #+#             */
/*   Updated: 2020/06/11 04:34:00 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_get_pres1(const char *s, va_list *ap, t_pft *one)
{
	if (s[one->index] == '*')
	{
		one->pres1 = va_arg(*ap, int);
		one->index++;
	}
	else if (s[one->index] <= '9' && s[one->index] >= '0')
	{
		one->pres1 = ft_atoi(s + one->index);
		one->index = one->index + ft_intlen(one->pres1);
		one->index = (ft_intlen(one->pres1) == 0) ? 1 : 0;
	}
	if (one->pres1 < 0)
	{
		one->pres1neg = 1;
		one->pres1 *= -1;
	}
}

void		ft_get_pres2(const char *s, va_list *ap, t_pft *one)
{
	if (s[one->index] == '*')
	{
		one->pres2 = va_arg(*ap, int);
		one->index++;
	}
	else if (s[one->index] <= '9' && s[one->index] >= '0')
	{
		one->pres2 = ft_atoi(s + one->index);
		one->index = one->index + ft_intlen(one->pres2);
		one->index = (ft_intlen(one->pres2) == 0) ? 1 : 0;
	}
	if (one->pres2 < 0)
	{
		one->pres2neg = 1;
		one->pres2 *= -1;
	}
}

void		ft_get_flag(const char *s, va_list *ap, t_pft *one)
{
	if (s[one->index] == '.')
	{
		one->flag = '.';
		one->index++;
	}
	if (s[one->index] == '-')
	{
		one->flag = '-';
		one->index++;
	}
	if (s[one->index] == '0')
	{
		one->flag = '0';
		one->index++;
	}
}

void		ft_get_var(const char *s, va_list *ap, t_pft *one)
{
	if (s[one->index] == 'x')
		ft_get_puthexa(va_arg(*ap, long), one);
	if (s[one->index] == 'X')
		ft_get_puthexa_maj(va_arg(*ap, long), one);
	if (s[one->index] == 'u')
		ft_get_putu(va_arg(*ap, unsigned long), one);
//	if (s[one->index] == 'p')
//		ft_get_point(va_arg(*ap, unsigned long), one);
	if (s[one->index] == 'd')
		ft_get_putnbr(va_arg(*ap, int), one);
	if (s[one->index] == 'i')
		ft_get_putnbr(va_arg(*ap, int), one);
	//if (s[one->index] == 's')
//		ft_putstr(va_arg(*ap, char *), one);
//	if (s[one->index] == 'c')
//		ft_putchar(va_arg(*ap, int), one);
//	if (s[one->index] == '%')
//		ft_putchar('%', one);
}
