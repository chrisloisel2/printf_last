/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_numbers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 03:04:05 by lchristo          #+#    #+#             */
/*   Updated: 2020/06/11 04:58:59 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_get_puthexa(long nb, t_pft *one)
{
	char	*base_data;

	base_data = "0123456789abcdef";
	if (nb < 0)
	{
		nb *= -1;
		ft_get_putchar('-', one);
	}
	if (nb >= 16)
	{
		ft_get_puthexa(nb / 16, one);
	}
	ft_get_putchar(base_data[nb % 16], one);
}

void	ft_get_puthexa_maj(long nb, t_pft *one)
{
	char	*base_data;

	base_data = "0123456789ABCDEF";	
	if (nb < 0)
	{
		nb *= -1;
		ft_get_putchar('-', one);
	}
	if (nb >= 16)
	{
		ft_get_puthexa_maj(nb / 16, one);
	}
	ft_get_putchar(base_data[nb % 16], one);
}

void	ft_get_putu(unsigned int nb, t_pft *one)
{
	char	*base_data;

	base_data = "0123456789";
	if (nb >= 10)
	{
		ft_get_putu(nb / 10, one);
	}
	ft_get_putchar(base_data[nb % 10], one);
}

void	ft_get_putnbr(int nb, t_pft *one)
{
	char	*base_data;

	base_data = "0123456789";
	if (nb < 0)
	{
		nb *= -1;
		ft_get_putchar('-', one);
	}
	if (nb >= 10)
	{
		ft_get_putnbr(nb / 10, one);
	}
	ft_get_putchar(base_data[nb % 10], one);
}
