/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/10 22:08:04 by lchristo          #+#    #+#             */
/*   Updated: 2020/06/12 03:51:54 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	int a;
	int b;
	char *s;
	int g;

	a = 1;
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
	printf("-%90d-\n", a);
	ft_printf("-%90d-\n", a);
	printf("\n");
	printf("-%90d-\n", a);
	ft_printf("-%90d-\n", a);
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
//	printf("------------------------------------------parcour  30.50---------------------------------------\n");
//	int x = -5;
//	int y = -5;
//	while (x <= 5)
//	{
//		while (y <= 5)
//		{	
//			printf("[%d.%d]\n", x, y);
//			printf("|%0*.*d|\n", x, y, 12);
//			ft_printf("|%0*.*d|\n", x, y, 12);
//			printf("\n");
//			y++;
//		}
//		y = -5;
//		x++;
//	}
//
//	printf("-%30.*d-\n", g, a);
//	ft_printf("-%30.*d-\n", g, a);
//	printf("\n");
//	printf("-%30.*d-\n", -g, a);
//	ft_printf("-%30.*d-\n", -g, a);
//	printf("\n");
//	printf("-%030.*d-\n", g, a);
//	ft_printf("-%030.*d-\n", g, a);
//	printf("\n");
//	printf("-%030.*d-\n", -g, a);
//	ft_printf("-%030.*d-\n", -g, a);
//	printf("\n");
//	printf("-%*.*d-\n", 30, g, a);
//	ft_printf("-%*.*d-\n", 30, g, a);
//	printf("\n");
//	printf("-%*.*d-\n", 30, -g, a);
//	ft_printf("-%*.*d-\n", 30, -g, a);
//	while(1);
	return (0);
}
