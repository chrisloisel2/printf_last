/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo </var/mail/lchristo>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 14:43:27 by lchristo          #+#    #+#             */
/*   Updated: 2020/05/07 01:16:32 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "res.h"
//#define ft_printf printf

int		main(void)
{
	static char *s_hidden = "hi low\0don't print me lol\0";
	int		a = -4;
	int		b = 0;
	char	c = 'a';
	int		d = 2147483647;
	int		e = -2147483648;
	int		f = 42;
	int		g = 25;
	int		h = 4200;
	int		i = 8;
	int		j = -12;
	int		k = 123456789;
	int		l = 0;
	int		m = -12345678;
	char	*n = "abcdefghijklmnop";
	char	*o = "-a";
	char	*p = "-12";
	char	*q = "0";
	char	*r = "%%";
	char	*s = "-2147483648";
	char	*t = "0x12345678";
	char	*u = "-0";
	int		z = 1;
	int		iop = 1;


	ft_printf("Simple input test");
	printf("T%d\n", iop);
	iop++;
	ft_printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X\n", i, j, k, l, m, n, c, c, j, j, j); //T2
	printf("%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X\n", i, j, k, l, m, n, c, c, j, j, j); //T2
	printf("T%d\n", iop);
	iop++;
	ft_printf("%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d\n", i, j, k, l, m, c, e, d); //T3
	printf("%0i, %0d, %0d, %0d, %0d, %0d, %0d, %0d\n", i, j, k, l, m, c, e, d); //T3
	printf("T%d\n", iop);
	iop++;
	ft_printf("%1i, %1d, %1d, %1d, %1d, %1d, %1d, %1d\n", i, j, k, l, m, c, e, d); //T4
	printf("%1i, %1d, %1d, %1d, %1d, %1d, %1d, %1d\n", i, j, k, l, m, c, e, d); //T4
	printf("T%d\n", iop);
	iop++;
	ft_printf("%2i, %2d, %2d, %2d, %2d, %2d, %2d, %2d\n", i, j, k, l, m, c, e, d); //T5
	printf("%2i, %2d, %2d, %2d, %2d, %2d, %2d, %2d\n", i, j, k, l, m, c, e, d); //T5
	printf("T%d\n", iop);
	iop++;
	ft_printf("%3i, %3d, %3d, %3d, %3d, %3d, %3d, %3d\n", i, j, k, l, m, c, e, d); //T6
	printf("%3i, %3d, %3d, %3d, %3d, %3d, %3d, %3d\n", i, j, k, l, m, c, e, d); //T6
	printf("T%d\n", iop);
	iop++;
	ft_printf("%4i, %4d, %4d, %4d, %4d, %4d, %4d, %4d\n", i, j, k, l, m, c, e, d); //T7
	printf("%4i, %4d, %4d, %4d, %4d, %4d, %4d, %4d\n", i, j, k, l, m, c, e, d); //T7
	printf("T%d\n", iop);
	iop++;
	ft_printf("%5i, %5d, %5d, %5d, %5d, %5d, %5d, %5d\n", i, j, k, l, m, c, e, d); //T8
	printf("%5i, %5d, %5d, %5d, %5d, %5d, %5d, %5d\n", i, j, k, l, m, c, e, d); //T8
	printf("T%d\n", iop);
	iop++;
	ft_printf("%6i, %6d, %6d, %6d, %6d, %6d, %6d, %6d\n", i, j, k, l, m, c, e, d); //T9
	printf("%6i, %6d, %6d, %6d, %6d, %6d, %6d, %6d\n", i, j, k, l, m, c, e, d); //T9
	printf("T%d\n", iop);
	iop++;
	ft_printf("%7i, %7d, %7d, %7d, %7d, %7d, %7d, %7d\n", i, j, k, l, m, c, e, d); //T10
	printf("%7i, %7d, %7d, %7d, %7d, %7d, %7d, %7d\n", i, j, k, l, m, c, e, d); //T10
	printf("T%d\n", iop);
	iop++;
	ft_printf("%8i, %8d, %8d, %8d, %8d, %8d, %8d, %8d\n", i, j, k, l, m, c, e, d); //T11
	printf("%8i, %8d, %8d, %8d, %8d, %8d, %8d, %8d\n", i, j, k, l, m, c, e, d); //T11
	printf("T%d\n", iop);
	iop++;
	ft_printf("%0.i, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d\n", i, j, k, l, m, c, e, d); //T12
	printf("%0.i, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d, %0.d\n", i, j, k, l, m, c, e, d); //T12
	printf("T%d\n", iop);
	iop++;
	ft_printf("%.0i, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d\n", i, j, k, l, m, c, e, d); //T13
	printf("%.0i, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d, %.0d\n", i, j, k, l, m, c, e, d); //T13
	printf("T%d\n", iop);
	iop++;
	ft_printf("%0.0i, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d\n", i, j, k, l, m, c, e, d); //T14
	printf("%0.0i, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d, %0.0d\n", i, j, k, l, m, c, e, d); //T14
	printf("T%d\n", iop);
	iop++;
	ft_printf("%-0i, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d\n", i, j, k, l, m, c, e, d); //T15
	printf("%-0i, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d, %-0d\n", i, j, k, l, m, c, e, d); //T15
	printf("T%d\n", iop);
	iop++;
	ft_printf("%0-i, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d\n", i, j, k, l, m, c, e, d); //T16
	printf("%0-i, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d, %0-d\n", i, j, k, l, m, c, e, d); //T16
	printf("T%d\n", iop);
	iop++;
	ft_printf("%-.i, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d\n", i, j, k, l, m, c, e, d); //T17
	printf("%-.i, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d, %-.d\n", i, j, k, l, m, c, e, d); //T17
	printf("T%d\n", iop);
	iop++;
	ft_printf("%-.0i, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d\n", i, j, k, l, m, c, e, d); //T18
	printf("%-.0i, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d, %-.0d\n", i, j, k, l, m, c, e, d); //T18
	printf("T%d\n", iop);
	iop++;
	ft_printf("%-i, %-d, %-d, %-d, %-d, %-d, %-d, %-d\n", i, j, k, l, m, c, e, d); //T19
	printf("%-i, %-d, %-d, %-d, %-d, %-d, %-d, %-d\n", i, j, k, l, m, c, e, d); //T19
	printf("T%d\n", iop);
	iop++;
	ft_printf("%.i, %.d, %.d, %.d, %.d, %.d, %.d, %.d\n", i, j, k, l, m, c, e, d); //T20
	printf("%.i, %.d, %.d, %.d, %.d, %.d, %.d, %.d\n", i, j, k, l, m, c, e, d); //T20
	printf("T%d\n", iop);
	iop++;
	ft_printf("%-0.0i, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d\n", i, j, k, l, m, c, e, d); //T21
	printf("%-0.0i, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d, %-0.0d\n", i, j, k, l, m, c, e, d); //T21
	printf("T%d\n", iop);
	iop++;
	ft_printf("%00i, %00d, %00d, %00d, %00d, %00d, %00d, %00d\n", i, j, k, l, m, c, e, d); //T22
	printf("%00i, %00d, %00d, %00d, %00d, %00d, %00d, %00d\n", i, j, k, l, m, c, e, d); //T22
	printf("T%d\n", iop);
	iop++;
	ft_printf("%1.i, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d\n", i, j, k, l, m, c, e, d); //T23
	printf("%1.i, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d, %1.d\n", i, j, k, l, m, c, e, d); //T23
	printf("T%d\n", iop);
	iop++;
	ft_printf("%.1i, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d\n", i, j, k, l, m, c, e, d); //T24
	printf("%.1i, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d, %.1d\n", i, j, k, l, m, c, e, d); //T24
	printf("T%d\n", iop);
	iop++;
	ft_printf("%1.1i, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d\n", i, j, k, l, m, c, e, d); //T25
	printf("%1.1i, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d, %1.1d\n", i, j, k, l, m, c, e, d); //T25
	printf("T%d\n", iop);
	iop++;
	ft_printf("%-1i, %-1d, %-1d, %-1d, %-1d, %-1d, %-1d, %-1d\n", i, j, k, l, m, c, e, d); //T26
	printf("%-1i, %-1d, %-1d, %-1d, %-1d, %-1d, %-1d, %-1d\n", i, j, k, l, m, c, e, d); //T26
	printf("T%d\n", iop);
	iop++;
	ft_printf("%-01i, %-01d, %-01d, %-01d, %-01d, %-01d, %-01d, %-01d\n", i, j, k, l, m, c, e, d); //T27
	printf("%-01i, %-01d, %-01d, %-01d, %-01d, %-01d, %-01d, %-01d\n", i, j, k, l, m, c, e, d); //T27
	printf("T%d\n", iop);
	iop++;
	ft_printf("%-1.i, %-1.d, %-1.d, %-1.d, %-1.d, %-1.d, %-1d, %-1d\n", i, j, k, l, m, c, e, d); //T28
	printf("%-1.i, %-1.d, %-1.d, %-1.d, %-1.d, %-1.d, %-1d, %-1d\n", i, j, k, l, m, c, e, d); //T28
	printf("T%d\n", iop);
	iop++;
	ft_printf("%-.1i, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d\n", i, j, k, l, m, c, e, d); //T29
	printf("%-.1i, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d, %-.1d\n", i, j, k, l, m, c, e, d); //T29
	printf("T%d\n", iop);
	iop++;
	ft_printf("%-0.1i, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d\n", i, j, k, l, m, c, e, d); //T30
	printf("%-0.1i, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d, %-0.1d\n", i, j, k, l, m, c, e, d); //T30
	printf("T%d\n", iop);
	iop++;
	ft_printf("%-1.0i, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d\n", i, j, k, l, m, c, e, d); //T31
	printf("%-1.0i, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d, %-1.0d\n", i, j, k, l, m, c, e, d); //T31
	printf("T%d\n", iop);
	iop++;
	ft_printf("%-1.1i, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d\n", i, j, k, l, m, c, e, d); //T32
	printf("%-1.1i, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d, %-1.1d\n", i, j, k, l, m, c, e, d); //T32
	printf("T%d\n", iop);
	iop++;
	ft_printf("%1.0i, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d\n", i, j, k, l, m, c, e, d); //T33
	printf("%1.0i, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d, %1.0d\n", i, j, k, l, m, c, e, d); //T33
	while (a < 5) //T34-69
	{
		printf("T%d            A%d\n", iop, a);
		iop++;
	//	printf("/*i, /*d, /*d, /*d, /*d, /*d, /*d, /*d\n");
		ft_printf("%*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
		printf("%*i, %*d, %*d, %*d, %*d, %*d, %*d, %*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
		printf("T%d            A%d\n", iop, a);
		iop++;
	//	printf("/0*i, /0*d, /0*d, /0*d, /0*d, /0*d, /0*d, /0*d\n");
		ft_printf("%0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
		printf("%0*i, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d, %0*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
		printf("T%d            A%d\n", iop, a);
		iop++;
	//	ft_printf("/-*i, /-*d, /-*d, /-*d, /-*d, /-*d, /-*d, /-*d\n");
		ft_printf("%-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
		printf("%-*i, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d, %-*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
		printf("T%d            A%d\n", iop, a);
		iop++;
	//	ft_printf("/.*i, /.*d, /.*d, /.*d, /.*d, /.*d, /.*d, /.*d\n");
		ft_printf("%.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
		printf("%.*i, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d, %.*d\n", a, i, a, j, a, k, a, l, a, m, a, c, a, e, a, d);
		a++;
	}	
 	a = -5;
	while(a < 5) //T70-177
	{
		b = -5;
		while (b < 1)
		{	
		//	printf("T[%d]-----A[%d]-----B[%d]                  %%-*.*i\n", iop, a, b);
			iop++;
			ft_printf("%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
			printf("%-*.*i, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d, %-*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);	
		//	printf("T[%d]-----A[%d]-----B[%d]                  %%*.*i\n", iop, a, b);
			iop++;
			ft_printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
			printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
		//	printf("T[%d]-----A[%d]-----B[%d]                  %%0*.*i\n", iop, a, b);
			iop++;
			ft_printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
			printf("%0*.*i, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d, %0*.*d\n", a, b, i, a, b, j, a, b, k, a, b, l, a, b, m, a, b, c, a, b, e, a, b, d);
			b++;
		}
		a++;
	}	
	a = 19;
	b = 14;
	ft_printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d\n", a, b, -42, a, b, 42, -a, -b, -42, -a, -b, 42, -a, b, -42, -a, b, 42, a, -b, -42, a, -b, 42); //T178
	printf("%*.*i, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d, %*.*d\n", a, b, -42, a, b, 42, -a, -b, -42, -a, -b, 42, -a, b, -42, -a, b, 42, a, -b, -42, a, -b, 42); //T178
//	printf("\n");
	ft_printf("%12.12i, %12.12d\n", -42, 42); //T179
	printf("%12.12i, %12.12d\n", -42, 42); //T179
//	printf("\n");
	ft_printf("%1s, %1s, %1s, %1s, %1s\n", n, o, p, q, r); //T180
	printf("%1s, %1s, %1s, %1s, %1s\n", n, o, p, q, r); //T180
//	printf("\n");
	ft_printf("%2s, %2s, %2s, %2s, %2s\n", n, o, p, q, r); //T181
	printf("%2s, %2s, %2s, %2s, %2s\n", n, o, p, q, r); //T181
//	printf("\n");
	ft_printf("%3s, %3s, %3s, %3s, %3s\n", n, o, p, q, r); //T182
	printf("%3s, %3s, %3s, %3s, %3s\n", n, o, p, q, r); //T182
//	printf("\n");
	ft_printf("%4s, %4s, %4s, %4s, %4s\n", n, o, p, q, r); //T183
	printf("%4s, %4s, %4s, %4s, %4s\n", n, o, p, q, r); //T183
//	printf("\n");
	ft_printf("%15s, %15s, %15s, %15s, %15s\n", n, o, p, q, r); //T184
	printf("%15s, %15s, %15s, %15s, %15s\n", n, o, p, q, r); //T184
//	printf("\n");
	ft_printf("%16s, %16s, %16s, %16s, %16s\n", n, o, p, q, r); //T185
	printf("%16s, %16s, %16s, %16s, %16s\n", n, o, p, q, r); //T185
//	printf("\n");
	ft_printf("%17s, %17s, %17s, %17s, %17s\n", n, o, p, q, r); //T186
	printf("%17s, %17s, %17s, %17s, %17s\n", n, o, p, q, r); //T186
//	printf("\n");
	ft_printf("%.s, %.s, %.s, %.s, %.s\n", n, o, p, q, r); //T186
	printf("%.s, %.s, %.s, %.s, %.s\n", n, o, p, q, r); //T186
//	printf("\n");
	ft_printf("%1.s, %1.s, %1.s, %1.s, %1.s\n", n, o, p, q, r); //T186
	printf("%1.s, %1.s, %1.s, %1.s, %1.s\n", n, o, p, q, r);//T186
//	printf("\n");
	a = -4;
	while (a < 5) //T187-213
	{
		ft_printf("%*s, %*s, %*s, %*s, %*s, %*s, %*s, %*s\n", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
		printf("%*s, %*s, %*s, %*s, %*s, %*s, %*s, %*s\n", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
	//	printf("\n");
		ft_printf("%-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s\n", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
		printf("%-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s, %-*s\n", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
	//	printf("\n");
		ft_printf("%.*s, %.*s, %.*s, %.*s, %.*s, %.*s, %.*s, %.*s\n", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
		printf("%.*s, %.*s, %.*s, %.*s, %.*s, %.*s, %.*s, %.*s\n", a, n, a, o, a, p, a, q, a, r, a, s, a, t, a, u);
	//	printf("\n");
		a++;
	}
//	printf("----------------------------------------------------------------------------------------------------\n");
	a = -2;
	while(a < 5) //T70-177
	{
		b = -2;
		while (b < 5)
		{
		//	printf("-----------------------A[%d]-----B[%d]--------------------------------------%%*.*s\n", a, b);
			ft_printf("%*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s\n", a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);
			printf("%*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s, %*.*s\n", a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);
		//	printf("\n");
		//	printf("-----------------------A[%d]-----B[%d]--------------------------------------%%-*.*s\n", a, b);
			ft_printf("%-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s\n", a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);
			printf("%-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s, %-*.*s\n", a, b, n, a, b, o, a, b, p, a, b, q, a, b, r, a, b, s, a, b, t, a, b, u);
		//	printf("\n");
			b++;
		}
		a++;
	}				
	printf("\n");
	ft_printf("%u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X\n", i, i, i, j, j, j, k, k, k, l, l, l, m, m, m, c, c, c, d, d, d, e, e, e); //T214
	printf("%u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X, %u, %x, %X\n", i, i, i, j, j, j, k, k, k, l, l, l, m, m, m, c, c, c, d, d, d, e, e, e); //T214
	printf("\n");
	a = -1;
	while (a < 5) //T214-256
	{
		ft_printf("%*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X\n", a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
		printf("%*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X, %*u, %*x, %*X\n", a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
	printf("\n");
		ft_printf("%0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X\n", a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
		printf("%0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X, %0*u, %0*x, %0*X\n", a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
	printf("\n");
		ft_printf("%-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X\n", a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
		printf("%-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X, %-*u, %-*x, %-*X\n", a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
	printf("\n");
		ft_printf("%.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X\n", a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
		printf("%.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X, %.*u, %.*x, %.*X\n", a, i, a, i, a, i, a, j, a, j, a, j, a, k, a, k, a, k, a, l, a, l, a, l, a, m, a, m, a, m, a, c, a, c, a, c, a, d, a, d, a, d, a, e, a, e, a, e);
	printf("\n");
		a++;
	}
	a = -1;

	return (0);
}
