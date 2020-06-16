/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo </var/mail/lchristo>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 14:43:27 by lchristo          #+#    #+#             */
/*   Updated: 2020/06/17 01:10:54 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
	printf("%%p\n", NULL);
	ft_printf("%p\n", NULL);
	printf("%p\n", NULL);
	printf("\n");
	printf("%%5p\n", NULL);
	ft_printf("%5p\n", NULL);
	printf("%5p\n", NULL);
	printf("\n");
	printf("%%2p\n", NULL);
	ft_printf("%2p\n", NULL);
	printf("%2p\n", NULL);
	printf("\n");
	printf("%%.p\n", NULL);
	ft_printf("%.p\n", NULL);
	printf("%.p\n", NULL);
	printf("\n");
	printf("%%5.p\n", NULL);
	ft_printf("%5.p\n", NULL);
	printf("%5.p\n", NULL);
	printf("\n");
	printf("%%2.p\n", NULL);
	ft_printf("%2.p\n", NULL);
	printf("%2.p\n", NULL);
	printf("\n");
	printf("%%9.2p\n", 1234);
	ft_printf("%9.2p\n", 1234);
	printf("%9.2p\n", 1234);
	printf("\n");
	printf("%%2.9p\n", 1234);
	ft_printf("%2.9p\n", 1234);
	printf("%2.9p\n", 1234);
	printf("\n");
	printf("%%.5p\n", 0);
	ft_printf("%.5p\n", 0);
	printf("%.5p\n", 0);
	printf("\n");
	printf("%%.0p\n", 0);
	ft_printf("%.0p\n", 0);
	printf("%.0p\n", 0);
	printf("\n");
	printf("%%5p\n", 0);
	ft_printf("%5p\n", 0);
	printf("%5p\n", 0);
	printf("\n");







//int p_basic(void){return test("%p%p%p%p%p%p%p%p%p%p%p%p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}


//int p_width_fit(void){return test("%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p%70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}


//int p_width_nofit(void){return test("%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p%5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}


//int p_width_16(void){return test("%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p%16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}


//int p_width_8(void){return test("%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p%8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}


//int p_width_32(void){return test("%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p%32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}

//int p_width_fit_lj(void){return test("%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p%-70p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}


//int p_width_nofit_lj(void){return test("%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p%-5p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}


//int p_width_16_lj(void){return test("%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p%-16p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}


//int p_width_8_lj(void){return test("%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p%-8p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}


//int p_width_32_lj(void){return test("%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p%-32p",&a01,&a02,&a03,&a04,&a05,&a06,&a07,&a08,&a09,&a10,&a11,&a12);}



	return (0);
}
