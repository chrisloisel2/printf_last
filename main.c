/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 22:08:04 by lchristo          #+#    #+#             */
/*   Updated: 2020/06/12 01:55:42 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	int a;
	int b;
	char *s;
	int g;

	a = 5;
	b = -123456789;
	s = "abcdefghijklmnopqrst";
	g = 50;

	printf("abcdef\n");
	ft_printf("abcdef\n");
	printf("\n");
	printf("%s\n", s);
	ft_printf("%s\n", s);
	printf("\n");
	printf("%d\n", a);
	ft_printf("%d\n", a);
	printf("\n");
	printf("%u\n", a);
	ft_printf("%u\n", a);
	printf("\n");
	printf("%u\n", b);
	ft_printf("%u\n", b);
	printf("\n");
	printf("------------------------------------------ft_star = *----------------------------------------\n");
	printf("-%*d-\n", g, a);
	ft_printf("-%*d-\n", g, a);
	printf("\n");
	printf("-%*d-\n", -g, a);
	ft_printf("-%*d-\n", -g, a);
	printf("\n");
	printf("------------------------------------------ft_dot = .----------------------------------------\n");
	printf("-%.*d-\n", g, a);
	ft_printf("-%.*d-\n", g, a);
	printf("\n");
	printf("-%.*d-\n", -g, a);
	ft_printf("-%.*d-\n", -g, a);
	printf("\n");
	printf("------------------------------------------ft_dot = 30---------------------------------------\n");
	printf("-%30d-\n", a);
	ft_printf("-%30d-\n", a);
	printf("\n");
	printf("-%30d-\n", a);
	ft_printf("-%30d-\n", a);
	printf("\n");
	printf("------------------------------------------ft_minus = ----------------------------------------\n");
	printf("-%-*d-\n", g, a);
	ft_printf("-%-*d-\n", g, a);
	printf("\n");
	printf("-%-*d-\n", -g, a);
	ft_printf("-%-*d-\n", -g, a);
	printf("\n");
	printf("------------------------------------------ft_zero = 0---------------------------------------\n");
	printf("-%0*d-\n", g, a);
	ft_printf("-%0*d-\n", g, a);
	printf("\n");
	printf("-%0*d-\n", -g, a);
	ft_printf("-%0*d-\n", -g, a);
//	while(1);
	return (0);
}
