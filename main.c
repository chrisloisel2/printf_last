/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo </var/mail/lchristo>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 14:43:27 by lchristo          #+#    #+#             */
/*   Updated: 2020/06/17 04:04:48 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	
	//Pointers - Basic

	static char *s_hidden = "hi low\0don't print me lol\0";
	static char	a01;
	static unsigned char a02;
	static short a03;
	static unsigned short a04;
	static int a05;
	static unsigned int a06;
	static long a07;
	static unsigned long a08;
	static long long a09;
	static unsigned long long a10;
	static char *a11;
	static void *a12;


	printf("%%p\n", NULL);
	ft_printf("|%p|\n", NULL);
	printf("|%p|\n", NULL);
	printf("\n");
	printf("%%5p\n", NULL);
	ft_printf("|%5p|\n", NULL);
	printf("|%5p|\n", NULL);
	printf("\n");
	printf("%%2p\n", NULL);
	ft_printf("|%2p|\n", NULL);
	printf("|%2p|\n", NULL);
	printf("\n");
	printf("%%.p\n", NULL);
	ft_printf("|%.p|\n", NULL);
	printf("|%.p|\n", NULL);
	printf("\n");
	printf("%%5.p\n", NULL);
	ft_printf("|%5.p|\n", NULL);
	printf("|%5.p|\n", NULL);
	printf("\n");
	printf("%%2.p\n", NULL);
	ft_printf("|%2.p|\n", NULL);
	printf("|%2.p|\n", NULL);
	printf("\n");
	printf("%%9.2p\n", 1234);
	ft_printf("|%9.2p|\n", 1234);
	printf("|%9.2p|\n", 1234);
	printf("\n");
	printf("%%2.9p\n", 1234);
	ft_printf("|%2.9p|\n", 1234);
	printf("|%2.9p|\n", 1234);
	printf("\n");
	printf("%%.5p\n", 0);
	ft_printf("|%.5p|\n", 0);
	printf("|%.5p|\n", 0);
	printf("\n");
	printf("%%.0p\n", 0);
	ft_printf("|%.0p|\n", 0);
	printf("|%.0p|\n", 0);
	printf("\n");
	printf("%%5p\n", 0);
	ft_printf("|%5p|\n", 0);
	printf("|%5p|\n", 0);
	printf("\n");
	printf("%%0-8.5u\n", 34);
	ft_printf("|%0-8.5u|\n", 34);
	printf("|%0-8.5u|\n", 34);
	printf("\n");
	printf("%%0-8.5u\n", 0);
	ft_printf("|%0-8.5u|\n", 0);
	printf("|%0-8.5u|\n", 0);
	printf("\n");
	printf("%%0-8.3u\n", 8375);
	ft_printf("|%0-8.3u|\n", 8375);
	printf("|%0-8.3u|\n", 8375);
	printf("\n");
	printf("%%0-3.7u\n", 3267);
	ft_printf("|%0-3.7u|\n", 3267);
	printf("|%0-3.7u|\n", 3267);
	printf("\n");
	printf("|%%0-3.3u|\n", 6983);
	ft_printf("|%0-3.3u|\n", 6983);
	printf("|%0-3.3u|\n", 6983);
	printf("\n");

	ft_printf("%p%p%p%p%p%p%p%p%p%p%p%p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("%p%p%p%p%p%p%p%p%p%p%p%p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");

	ft_printf("%70p\n", &a01);
	printf("%70p\n", &a01);
	printf("\n");

	ft_printf("%p\n", &a01);
	printf("%p\n", &a01);
	printf("\n");

	ft_printf("%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	printf("%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	/*

	ft_printf("%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");

	ft_printf("%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");

	ft_printf("%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");

	ft_printf("%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");

	ft_printf("%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");

	ft_printf("%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");

	ft_printf("%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");

	ft_printf("%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");

	ft_printf("%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p\n",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);
	printf("\n");
	*/

	ft_printf("(%-.00s)\n", s_hidden);
	printf("(%-.00s)\n", s_hidden);
	printf("\n");
	ft_printf("(%-.09s)\n", s_hidden);
	printf("(%-.09s)\n", s_hidden);
	printf("\n");
	ft_printf("(%00s)\n", s_hidden);
	printf("(%00s)\n", s_hidden);
	printf("\n");
	ft_printf("(%000s)\n", s_hidden);
	printf("(%000s)\n", s_hidden);
	printf("\n");
	ft_printf("(%0000s)\n", s_hidden);
	printf("(%0000s)\n", s_hidden);
	printf("\n");
	ft_printf("(%-00s)\n", s_hidden);
	printf("(%-00s)\n", s_hidden);
	printf("\n");
	ft_printf("(%0-0s)\n", s_hidden);
	printf("(%0-0s)\n", s_hidden);
	printf("\n");
	ft_printf("(%00-s)\n", s_hidden);
	printf("(%00-s)\n", s_hidden);
	printf("\n");
	ft_printf("(%03s)\n", s_hidden);
	printf("(%03s)\n", s_hidden);
	printf("\n");
	ft_printf("(%09s)\n", s_hidden);
	printf("(%09s)\n", s_hidden);
	printf("\n");

	return (0);
}
