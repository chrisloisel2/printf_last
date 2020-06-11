/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 22:08:04 by lchristo          #+#    #+#             */
/*   Updated: 2020/06/11 04:52:15 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	int a;
	int b;
	char *s;
	int g;

	a = 123456789;
	b = -123456789;
	s = "abcdefghijklmnopqrst";
	g = -55;

	printf("abcdef\n");
	ft_printf("abcdef\n");
	printf("%s\n", s);
	ft_printf("%s\n", s);
	printf("%d\n", a);
	ft_printf("%d\n", a);
	printf("%u\n", a);
	ft_printf("%u\n", a);
	printf("%u\n", b);
	ft_printf("%u\n", b);
	printf("-%*d-\n", g, a);
	ft_printf("-%*d-\n", g, a);
	printf("-%*d-\n", -g, a);
	ft_printf("-%*d-\n", -g, a);
//	printf("-%*.*d-\n", g, 8, a);
//	ft_printf("-%*.*d-\n", g, 8, a);
//	printf("-%*-*d-\n", -g, 5, a);
//	ft_printf("-%*-*d-\n", -g, 5, a);
//	printf("-%*.8d-\n", g, a);
//	ft_printf("-%*.8d-\n", g, a);
//	printf("-%*-8d-\n", -g, a);
//	ft_printf("-%*-8d-\n", -g, a);

//	while(1);
	return (0);
}
