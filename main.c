#include "res.h"
#include <stdio.h>

int		main(void)
{
	int a;
	static char *s_hidden = "hi low\0don't print me lol\0";
	int b;
	int aneg;
	char c;
	char *s;
	char *k;
	int  neg;
	char *str;

	str = "\0";
	neg = -10;
	aneg = -10;
	k = NULL;
	s = "test";
	c = 'T';
	a = -10;
	b = -10;

	printf("\n");
	ft_printf("test\n");
	printf("test\n");
	printf("\n");
	ft_printf("d =|%d|\n", a);
	printf("d =|%d|\n", a);
	printf("\n");
	ft_printf("d|d|d =|%d|%d|%d|\n", a, b, a);
	printf("d|d|d =|%d|%d|%d|\n", a, b, a);
	printf("\n");
	ft_printf("d--d--d =|%d--%d--%d|\n", a, a, a);
	printf("d--d--d =|%d--%d--%d|\n", a, a, a);
	printf("\n");
	ft_printf("-d =|%d|\n", neg);
	printf("-d =|%d|\n", neg);
	printf("\n");
	ft_printf("-d|-d|-d =|%d|%d|%d|\n", neg, neg, neg);
	printf("-d|-d|-d =|%d|%d|%d|\n", neg, neg, neg);
	printf("\n");
	ft_printf("-d|--|-d--|-d =|%d|--|%d|--|%d|\n", neg, neg, neg);
	printf("-d|--|-d--|-d =|%d|--|%d|--|%d|\n", neg, neg, neg);
	printf("\n");
	ft_printf("i =|%i|\n", neg);
	printf("i =|%i|\n", neg);
	printf("\n");
	ft_printf("d|i|u|x =|%d|%i|%u|%x|\n", neg, neg, neg, neg);
	printf("d|i|u|x =|%d|%i|%u|%x|\n", neg, neg, neg, neg);
	printf("\n");
	ft_printf("u|--|i|--|X =|%u|--|%i|--|%X|\n", neg, neg, neg);
	printf("u|--|i|--|X =|%u|--|%i|--|%X|\n", neg, neg, neg);
	printf("\n");
	ft_printf("c =|%c|\n", c);
	printf("c =|%c|\n", c);
	printf("\n");
	ft_printf("*c =|%*c|\n", 15, c);
	printf("*c =|%*c|\n", 15, c);
	printf("\n");
	ft_printf("-4c =|%-4c|\n", c);
	printf("-4c =|%-4c|\n", c);
	printf("\n");
	ft_printf("x =|%x|\n", a);
	printf("x =|%x|\n", a);
	printf("\n");
	ft_printf("X =|%X|\n", a);
	printf("X =|%X|\n", a);
	printf("\n");
	ft_printf("c--c--c =|%c|--|%c|--|%c|\n", c, c, c);
	ft_printf("c--c--c =|%c|--|%c|--|%c|\n", c, c, c);
	printf("\n");
	ft_printf("ccc =|%c|%c|%c|\n", c, c, c);
	printf("ccc =|%c|%c|%c|\n", c, c, c);
	printf("\n");
	ft_printf("%% =|%%|\n");
	printf("%% =|%%|\n");
	printf("\n");
	ft_printf("i =|%i|\n", a);
	printf("i =|%i|\n", a);
	printf("\n");
//	ft_printf("*15s =|%s|\n", s);
//	printf("*15s =|%s|\n", s);
//	printf("\n");
//	ft_printf("*15s =|%*s|\n", 15, s);
//	printf("*15s =|%*s|\n", 15, s);
//	printf("\n");
//	ft_printf("*s =|%*s|\n", -15, s);
//	printf("*s =|%*s|\n", -15, s);
//	printf("\n");
//	ft_printf("-15s =|%-15s|\n", s);
//	printf("-15s =|%-15s|\n", s);
//	printf("\n");
//	ft_printf(".15s =|%.15s|\n", s);
//	printf(".15s =|%.15s|\n", s);
//	printf("\n");
//	ft_printf(".5s =|%.5s|\n", s);
//	printf(".5s =|%.5s|\n", s);
//	printf("\n");
//	ft_printf("*(15).20s =|%*.20s|\n", 15, s);
//	printf("*(15).20s =|%*.20s|\n", 15, s);
//	printf("\n");
//	ft_printf("*(-15).15s =|%*.25s|\n", -15, s);
//	printf("*(-15).15s =|%*.25s|\n", -15, s);
//	printf("\n");
//	ft_printf("-15.18s =|%-15.18s|\n", s);
//	printf("-15.18s =|%-15.18s|\n", s);
//	printf("\n");
	ft_printf("s--s--s =|%s--%s--%s|\n", s, s, s);
	printf("s--s--s =|%s--%s--%s|\n", s, s, s);
	printf("\n");
	ft_printf("s|s|s =|%s|%s|%s|\n", s, s, s);
	printf("s|s|s =|%s|%s|%s|\n", s, s, s);
	printf("\n");
	ft_printf("p =|%p--%p--%p|\n", &s, &s, &s);
	printf("p =|%p--%p--%p|\n", &s, &s, &s);
	printf("\n");
	ft_printf(".1d =|%.1d|\n", a);
	printf(".1d =|%.1d|\n", a);
	printf("\n");
	ft_printf(".5d =|%.5d|\n", a);
	printf(".5d =|%.5d|\n", a);
	printf("\n");
	ft_printf(".10d =|%.10d|\n", a);
	printf(".10d =|%.10d|\n", a);
	printf("\n");
	ft_printf(".100d =|%.100d|\n", a);
	printf(".100d =|%.100d|\n", a);
	printf("\n");
	ft_printf(".1x =|%.1x|\n", a);
	printf(".1x =|%.1x|\n", a);
	printf("\n");
	ft_printf(".5X =|%.5X|\n", a);
	printf(".5X =|%.5X|\n", a);
	printf("\n");
	ft_printf(".10i =|%.10i|\n", a);
	printf(".10i =|%.10i|\n", a);
	printf("\n");
	ft_printf(".100d =|%.100d|\n", a);
	printf(".100d =|%.100d|\n", a);
	printf("\n");
	ft_printf("01d =|%01d|\n", a);
	printf("01d =|%01d|\n", a);
	printf("\n");
	ft_printf("05d =|%05d|\n", a);
	printf("05d =|%05d|\n", a);
	printf("\n");
	ft_printf("010d =|%010d|\n", a);
	printf("010d =|%010d|\n", a);
	printf("\n");
	ft_printf("0100d =|%0100d|\n", a);
	printf("0100d =|%0100d|\n", a);
	printf("\n");
	ft_printf("-1d =|%-1d|\n", a);
	printf("-1d =|%-1d|\n", a);
	printf("\n");
	ft_printf("-5d =|%-5d|\n", a);
	printf("-5d =|%-5d|\n", a);
	printf("\n");
	ft_printf("-10d =|%-10d|\n", a);
	printf("-10d =|%-10d|\n", a);
	printf("\n");
	ft_printf("-100d =|%-100d|\n", a);
	printf("-100d =|%-100d|\n", a);
	printf("\n");
	ft_printf("-10X =|%-10X|\n", a);
	printf("-10X =|%-10X|\n", a);
	printf("\n");
	ft_printf("-5x * =|%-5x|\n", a);
	printf("-5x * =|%-5x|\n", a);
	printf("\n");
	ft_printf("*%dd =|%*d|\n", a, a, a);
	printf("*%dd =|%*d|\n", a, a, a);
	printf("\n");
	ft_printf("*%dd =|%*d|\n", -a, -a, -a);
	printf("*%dd =|%*d|\n", -a, -a, -a);
	printf("\n");
	ft_printf("*%dd =|%*d|\n", aneg, aneg, -a);
	printf("*%dd =|%*d|\n", aneg, aneg, -a);
	printf("\n");
	ft_printf("*%dd =|%*d|\n", b, b, -a);
	printf("*%dd =|%*d|\n", b, b, -a);
	printf("\n");
	ft_printf("*%dd =|%*d|\n", a, a, -b);
	printf("*%dd =|%*d|\n", a, a, -b);
	printf("\n");
	ft_printf("*%dd =|%*d|\n", 100, 100, 5);
	printf("*%dd =|%*d|\n", 100, 100, 5);
	printf("\n");
	ft_printf("*%dd =|%*d|\n", 1000, 1000, 5);
	printf("*%dd =|%*d|\n", 1000, 1000, 5);
	printf("\n");
	ft_printf("d [ft_printf(s)] =|%d|\n", ft_printf("%s", s));
	printf("d [printf(s)] =|%d|\n", printf("%s", s));
	printf("\n");
	ft_printf("d [ft_printf(d)] =|%d|\n", ft_printf("%d", b));
	printf("d [printf(d)] =|%d|\n", printf("%d", b));
	printf("\n");
	ft_printf("NULL =|%s|\n", k);
	printf("NULL =|%s|\n", k);
	printf("\n");
	ft_printf("*10d =|%*d|\n", 10, a);
	printf("*10d =|%*d|\n", 10, a);
	printf("\n");
	ft_printf("*(-10)d =|%*d|\n", -10, a);
	printf("*(-10)d =|%*d|\n", -10, a);
	printf("\n");
	ft_printf("*(-20)d =|%*d|\n", -20, a);
	printf("*(-20)d =|%*d|\n", -20, a);
	printf("\n");
	ft_printf("*(-30)d =|%*d|\n", -30, a);
	printf("*(-30)d =|%*d|\n", -30, a);
	printf("\n");
	ft_printf("*(-100)d =|%*d|\n", -100, a);
	printf("*(-100)d =|%*d|\n", -100, a);
	printf("\n");
	ft_printf("*(-10).1d =|%*.1d|\n", -10, a);
	printf("*(-10).1d =|%*.1d|\n", -10, a);
	printf("\n");
	ft_printf("*(-10).15d =|%*.15d|\n", -10, a);
	printf("*(-10).15d =|%*.15d|\n", -10, a);
	printf("\n");
	ft_printf("*(-20).50d =|%*.50d|\n", -20, a);
	printf("*(-20).50d =|%*.50d|\n", -20, a);
	printf("\n");
	ft_printf("*(-100).100d =|%*.100d|\n", -100, a);
	printf("*(-100).100d =|%*.100d|\n", -100, a);
	printf("\n");
	ft_printf("*1d =|%*d|\n", 1, a);
	printf("*1d =|%*d|\n", 1, a);
	printf("\n");
	ft_printf("*(5)d =|%*d|\n", 5, a);
	printf("*(5)d =|%*d|\n", 5, a);
	printf("\n");
	ft_printf("*(10)d =|%*d|\n", 10, a);
	printf("*(10)d =|%*d|\n", 10, a);
	printf("\n");
	ft_printf("*(30)d =|%*d|\n", 30, a);
	printf("*(30)d =|%*d|\n", 30, a);
	printf("\n");
	ft_printf("*(100)d =|%*d|\n", 100, a);
	printf("*(100)d =|%*d|\n", 100, a);
	printf("\n");
	ft_printf("*(10).1d =|%*.1d|\n", 10, a);
	printf("*(10).1d =|%*.1d|\n", 10, a);
	printf("\n");
	ft_printf("*(20).15d =|%*.15d|\n", 20, a);
	printf("*(20).15d =|%*.15d|\n", 20, a);
	printf("\n");
	ft_printf("*(20).50d =|%*.50d|\n", 20, a);
	printf("*(20).50d =|%*.50d|\n", 20, a);
	printf("\n");
	ft_printf("*(100).100d =|%*.100d|\n", 100, a);
	printf("*(100).100d =|%*.100d|\n", 100, a);
	printf("\n");
	ft_printf("-10.5d =|%-10.5d|\n", a);
	printf("-10.5d =|%-10.5d|\n", a);
	printf("\n");
	ft_printf("-5.50d =|%-5.50d|\n", b);
	printf("-5.50d =|%-5.50d|\n", b);
	printf("\n");
	ft_printf("-15.15d =|%-15.15d|\n", b);
	printf("-15.15d =|%-15.15d|\n", b);
	printf("\n");
	ft_printf("-1.1d =|%-1.1d|\n", b);
	printf("-1.1d =|%-1.1d|\n", b);
	printf("\n");
	ft_printf("-10.10d =|%-10.10d|\n", b);
	printf("-10.10d =|%-10.10d|\n", b);
	printf("\n");
	ft_printf("-10.1d =|%-10.1d|\n", -b);
	printf("-10.1d =|%-10.1d|\n", -b);
	printf("\n");
	ft_printf("-20.15d =|%-20.15d|\n", a);
	printf("-20.15d =|%-20.15d|\n", a);
	printf("\n");
	ft_printf("*%d.1d =|%*.1d|\n", a, a, b);
	printf("*%d.1d =|%*.1d|\n", a, a, b);
	printf("\n");
	ft_printf("*%d.2d =|%*.2d|\n", a, a, b);
	printf("*%d.2d =|%*.2d|\n", a, a, b);
	printf("\n");
	ft_printf("*%d.32d =|%*.32d|\n", a, a, b);
	printf("*%d.32d =|%*.32d|\n", a, a, b);
	printf("\n");
	ft_printf("*%d.4d =|%*.4d|\n", a, a, b);
	printf("*%d.4d =|%*.4d|\n", a, a, b);
	printf("\n");
	ft_printf("*%d.18d =|%*.4d|\n", a, a, b);
	printf("*%d.18d =|%*.4d|\n", a, a, b);
	printf("\n");
	ft_printf("*%dd =|%*d|\n", a, a, b);
	printf("*%dd =|%*d|\n", a, a, b);
	printf("\n");
	ft_printf("*%d.32d =|%*.32d|\n", b, b, b);
	printf("*%d.32d =|%*.32d|\n", b, b, b);
	printf("\n");
	ft_printf("*%d.2d =|%*.2d|\n", b, b, b);
	printf("*%d.2d =|%*.2d|\n", b, b, b);
	printf("\n");
	ft_printf("*%d.3d =|%*.3d|\n", b, b, b);
	printf("*%d.3d =|%*.3d|\n", b, b, b);
	printf("\n");
	ft_printf("-10.2d =|%-10.2d|\n", a);
	printf("-10.2d =|%-10.2d|\n", a);
	printf("\n");
	ft_printf("-5.2d =|%-5.2d|\n", -b);
	printf("-5.2d =|%-5.2d|\n", -b);
	printf("\n");
	ft_printf("-15.1d =|%-15.1d|\n", -b);
	printf("-15.1d =|%-15.1d|\n", -b);
	printf("\n");
	ft_printf("-1.1d =|%-1.1d|\n", -b);
	printf("-1.1d =|%-1.1d|\n", -b);
	printf("\n");
	ft_printf("-20.1d =|%-20.1d|\n", -a);
	printf("-20.1d =|%-20.1d|\n", -a);
	printf("\n");
	ft_printf("*%d.1d =|%*.1d|\n", -a, -a, -b);
	printf("*%d.1d =|%*.1d|\n", -a, -a, -b);
	printf("\n");
	ft_printf("*%d.5d =|%*.5d|\n", -a, -a, -b);
	printf("*%d.5d =|%*.5d|\n", -a, -a, -b);
	printf("\n");
	ft_printf("*%d.3d =|%*.3d|\n", -a, -a, -b);
	printf("*%d.3d =|%*.3d|\n", -a, -a, -b);
	printf("\n");
	ft_printf("*%d.3d =|%*.3d|\n", -a, -a, -b);
	printf("*%d.3d =|%*.3d|\n", -a, -a, -b);
	printf("\n");
	ft_printf("*%d.3d =|%*.3d|\n", -a, -a, -b);
	printf("*%d.3d =|%*.3d|\n", -a, -a, -b);
	printf("\n");
	ft_printf("*%dd =|%*d|\n", a, a, -b);
	printf("*%dd =|%*d|\n", a, a, -b);
	printf("\n");
	ft_printf("*%d.2d =|%*.2d|\n", -b, -b, -b);
	printf("*%d.2d =|%*.2d|\n", -b, -b, -b);
	printf("\n");
	ft_printf("*%d.2d =|%*.2d|\n", -b, -b, -b);
	printf("*%d.2d =|%*.2d|\n", -b, -b, -b);
	printf("\n");
	ft_printf("*%d.2d =|%*.2d|\n", -b, -b, -b);
	printf("*%d.2d =|%*.2d|\n", -b, -b, -b);
	printf("\n");
	ft_printf("*%d.1d =|%*.1d|\n", -b, -b, -b);
	printf("*%d.1d =|%*.1d|\n", -b, -b, -b);
	printf("\n");
	ft_printf("*%d.1d =|%*.1d|\n", b, b, b);
	printf("*%d.1d =|%*.1d|\n", b, b, b);
	printf("\n");
	ft_printf("*%d.3d =|%*.2d|\n", 99, 99, 99);
	printf("*%d.3d =|%*.2d|\n", 99, 99, 99);
	printf("\n");
	ft_printf("*%d.1d =|%*.1d|\n", 100, 100, 100);
	printf("*%d.1d =|%*.1d|\n", 100, 100, 100);
	printf("\n");
	ft_printf("*%d.2d =|%*.2d|\n", 100, 100, 100);
	printf("*%d.2d =|%*.2d|\n", 100, 100, 100);
	printf("\n");
	ft_printf("*%d.3d =|%*.2d|\n", 100, 100, 100);
	printf("*%d.3d =|%*.2d|\n", 100, 100, 100);
	printf("\n");
	ft_printf("*%d.4d =|%*.4d|\n", 100, 100, 100);
	printf("*%d.4d =|%*.4d|\n", 100, 100, 100);
	printf("\n");
	ft_printf("*%d.3d =|%*.2d|\n", 99, 99, 99);
	printf("*%d.3d =|%*.2d|\n", 99, 99, 99);
	printf("\n");
	ft_printf("*%d.1d =|%*.1d|\n", 100, 100, 100);
	printf("*%d.1d =|%*.1d|\n", 100, 100, 100);
	printf("\n");
	ft_printf("*%d.2d =|%*.2d|\n", 100, 100, 100);
	printf("*%d.2d =|%*.2d|\n", 100, 100, 100);
	printf("\n");
	ft_printf("*%d.3d =|%*.2d|\n", 100, 100, 100);
	printf("*%d.3d =|%*.2d|\n", 100, 100, 100);
	printf("\n");
	ft_printf("*%d.4d =|%*.4d|\n", 100, 100, 100);
	printf("*%d.4d =|%*.4d|\n", 100, 100, 100);
	printf("\n");
	ft_printf("*%d.4d =|%*.4d|\n", 100, 100, -100);
	printf("*%d.4d =|%*.4d|\n", 100, 100, -100);
	printf("\n");
	ft_printf("*%d.4d =|%*.4d|\n", -5, -5, -100);
	printf("*%d.4d =|%*.4d|\n", -5, -5, -100);
	printf("\n");
	ft_printf("*%d.4d =|%*.4d|\n", -5, -5, 100);
	printf("*%d.4d =|%*.4d|\n", -5, -5, 100);
	printf("\n");
	ft_printf("*%d.1d =|%*.1d|\n", -1, -1, 10);
	printf("*%d.1d =|%*.1d|\n", -1, -1, 10);
	printf("\n");
	ft_printf("|%5%|\n");
	printf("|%5%|\n");
	printf("\n");
	ft_printf("|%15%|\n");
	printf("|%15%|\n");
	printf("\n");
	ft_printf("|%-5%|\n");
	printf("|%-5%|\n");
	printf("\n");
	ft_printf("|%u|\n", -5);
	printf("|%u|\n", -5);
	printf("\n");
	ft_printf("|%32s|\n", "hello");
	printf("|%32s|\n", "hello");
	printf("\n");
	ft_printf("|%16s|\n", "hello");
	printf("|%16s|\n", "hello");
	printf("\n");
	ft_printf("|%5s|\n", "hello");
	printf("|%5s|\n", "hello");
	printf("\n");
	ft_printf("|%7.5s|\n", "yolo");
	printf("|%7.5s|\n", "yolo");
	printf("\n");
	ft_printf("|%7.5s|\n", "bombastic");
	printf("|%7.5s|\n", "bombastic");
	printf("\n");
	ft_printf("|%-7.5s|\n", "yolo");
	printf("|%-7.5s|\n", "yolo");
	printf("\n");
	ft_printf("|%-7.5s|\n", "tubular");
	printf("|%-7.5s|\n", "tubular");
	printf("\n");
	ft_printf("|%7.5s|%7.7s|\n", "hello", "word");
	printf("|%7.5s|%7.7s|\n", "hello", "word");
	printf("\n");
	ft_printf("|%-5s|\n", "netero");
	printf("|%-5s|\n", "netero");
	printf("\n");
	ft_printf("|%-s|\n", "netero");
	printf("|%-s|\n", "netero");
	printf("\n");
	ft_printf("|%-30s|\n", "netero");
	printf("|%-30s|\n", "netero");
	printf("\n");
	ft_printf("010.8=|%010.8d|\n", 5);
	printf("010.8=|%010.8d|\n", 5);
	printf("\n");
	ft_printf(".3s=|%.3s|\n", "hello");
	printf(".3s=|%.3s|\n", "hello");
	printf("\n");
	ft_printf("03.7i=|%03.7i|\n", 3267);
	printf("03.7i=|%03.7i|\n", 3267);
	printf("\n");
	ft_printf("03.7i=|%03.7i|\n", -2375);
	printf("03.7i=|%03.7i|\n", -2375);
	printf("\n");
	ft_printf("c=|%c|\n", '\0');
	printf("c=|%c|\n", '\0');
	printf("\n");
	ft_printf("c=|%5c|\n", '\0');
	printf("c=|%5c|\n", '\0');
	printf("\n");
	ft_printf("c=|%-5c|\n", '\0');
	printf("c=|%-5c|\n", '\0');
	printf("\n");
	ft_printf("s=|%s|\n", s_hidden);
	printf("s=|%s|\n", s_hidden);
	printf("\n");
	ft_printf("s=|%5s|\n", s_hidden);
	printf("s=|%5s|\n", s_hidden);
	printf("\n");
	ft_printf("s=|%.09s|\n", s_hidden);
	printf("s=|%.09s|\n", s_hidden);
	printf("\n");
	ft_printf("s=|%-3.s|\n", s_hidden);
	printf("s=|%-3.s|\n", s_hidden);
	printf("\n");
	ft_printf("1s=|%-8.s|\n", s_hidden);
	printf("2s=|%-8.s|\n", s_hidden);
	printf("\n");
	ft_printf("3.1s=|%-3.1s|\n", s_hidden);
	printf("3.1s=|%-3.1s|\n", s_hidden);
	printf("\n");
	ft_printf("10.1=|%-10.1s|\n", s_hidden);
	printf("10.1=|%-10.1s|\n", s_hidden);
	printf("\n");
	ft_printf("3.s=|%3.s|\n", "g");
	printf("3.s=|%3.s|\n", "g");
	printf("\n");
	ft_printf("10.s=|%10.s|\n", s_hidden);
	printf("10.s=|%10.s|\n", s_hidden);
	printf("\n");
	ft_printf("9s=|%9s|\n", s_hidden);
	printf("9s=|%9s|\n", s_hidden);
	printf("\n");
	ft_printf("9s=|%2s|\n", s_hidden);
	printf("9s=|%2s|\n", s_hidden);
	printf("\n");
	ft_printf("-8.5i=|%-8.5i|\n", 34);
	printf("-8.5i=|%-8.5i|\n", 34);
	printf("\n");
	ft_printf("-8.5=|%-10.5i|\n", -216);
	printf("-8.5=|%-10.5i|\n", -216);
	printf("\n");
	ft_printf("-10.5i=|%-10.5i|\n", -216);
	printf("-10.5i=|%-10.5i|\n", -216);
	printf("\n");
	ft_printf("-8.5i=|%-8.5i|\n", 0);
	ft_printf("-8.5i=|%-8.5i|\n", 0);
	printf("\n");
	ft_printf("8.5i=|%8.5i|\n", 34);
	printf("8.5i=|%8.5i|\n", 34);
	printf("\n");
	ft_printf("10.5i=|%10.5i|\n", -216);
	printf("10.5i=|%10.5i|\n", -216);
	printf("\n");
	ft_printf("8.5 =|%8.5i|\n", 0);
	printf("8.5 =|%8.5i|\n", 0);
	printf("\n");
	ft_printf("1. =|%1.s|\n", str);
	printf("1. =|%1.s|\n", str);
	printf("\n");
	ft_printf("5. =|%5.s|\n", str);
	printf("5. =|%5.s|\n", str);
	printf("\n");
	ft_printf("9. =|%9.s|\n", str);
	printf("9. =|%9.s|\n", str);
	printf("\n");
	ft_printf("%%-5.3s LYDI == |%-5.3s|\n", "LYDI");
	printf("%%-5.3s LYDI == |%-5.3s|\n", "LYDI");
	printf("\n");
	ft_printf("%%04.5i 42 == |%04.5i|\n", 42);
	printf("%%04.5i 42 == |%04.5i|\n", 42);
	printf("\n");
	ft_printf("%%04.3i 42 == |%04.3i|\n", 422);
	printf("%%04.3i 42 == |%04.3i|\n", 422);
	printf("\n");
	ft_printf("%%04.2i 42 == |%04.2i|\n", 42);
	printf("%%04.2i 42 == |%04.2i|\n", 42);
	printf("\n");
	ft_printf("%%04i 42 == |%04i|\n", 42);
	printf("%%04i 42 == |%04i|\n", 42);
	printf("\n");
	ft_printf("%%05i 42 == |%05i|\n", 42);
	printf("%%05i 42 == |%05i|\n", 42);
	printf("\n");
	ft_printf("%%0i 42 == |%0i|\n", 42);
	printf("%%0i 42 == |%0i|\n", 42);
	printf("\n");
	ft_printf("%%0d 0000042 == |%0d|\n", 0000042);
	printf("%%0d 0000042 == |%0d|\n", 0000042);
	printf("\n");

	return (0);
}
