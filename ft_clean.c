/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 22:29:38 by lchristo          #+#    #+#             */
/*   Updated: 2020/05/05 22:39:01 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "res.h"

void	ft_clean(t_buffer *buf)
{
	buf->cpt1 = 0;
	buf->cpt2 = 0;
	buf->negatif = 0;
	buf->d = 0;
	buf->pres = 0;
	buf->g = 0;
	buf->rb = 0;
	buf->rb2 = 0;
	buf->minus = 0;
	buf->flag = 0;
	buf->modulo = 0;
	buf->div = 0;
}

int		ft_test(const char *s, int trd)
{
	if (s[trd] == 's')
		return (0);
	return (1);
}

char	*ft_strcpy(char *str, int x, int y)
{
	char	*str2;

	if (!(str2 = malloc(sizeof(char) * ft_strlen(str) + 1)))
		return (NULL);
	while (y <= ft_strlen(str) && y < x)
	{
		str2[y] = '\0';
		str2[y] = str[y];
		y++;
	}
	str2[y] = '\0';
	return (str2);
}

void	ft_calculus(t_buffer *buf)
{
	int cp;

	cp = 0;
	(buf->rb2 == 1) ? buf->cpt2 = 0 : 0;
//	(buf->rb == 1 && buf->rb2 == 1) ? buf->cpt2 = 0 : 0;
	buf->d = ft_strlen(buf->str) - ft_strlen(buf->str1);
	cp = buf->d - buf->negatif;
	if (buf->cpt1 > 0)
		buf->cpt1 -= buf->negatif;
	else if (buf->cpt2 >= cp + 1) 
		buf->cpt2 -= buf->negatif;
	buf->cpt1 -= buf->cpt2;
	if (buf->cpt2 > cp)
		buf->cpt2 -= cp;
	else
	{
		while (buf->cpt2 > 0 && cp > 0)
		{
			buf->cpt2--;
			cp--;
		}
		(buf->cpt1 > buf->cpt2) ? buf->cpt1 -= cp : 0;
	}
//	printf("4cpt(%d) cpt2(%d) cp(%d) neg(%d)\n", buf->cpt1, buf->cpt2, cp, buf->negatif);
}
