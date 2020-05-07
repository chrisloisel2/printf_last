/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 22:36:17 by lchristo          #+#    #+#             */
/*   Updated: 2020/05/05 22:37:31 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "res.h"

int			ft_flag(char c)
{
	if (c == '.')
		return (1);
	if (c == '0')
		return (1);
	if (c == '-')
		return (1);
	return (0);
}

void		ft_shorter2(const char *s, t_buffer *buf)
{
	int		a;
	int		test;

	printf("shorter2\n");
	test = 0;
	a = 0;
	if (s[buf->i++] == '-')
	{
		a = ft_atoi(s + buf->i);
		buf->i = buf->i + ft_intlen(a);
		test = ft_strlen(buf->str) - ft_strlen(buf->str1);
		while (a-- - test > 0 && (ft_test(s, buf->i)))
			ft_add(' ', &buf->str);
	}
}

void		ft_dot2(t_buffer *buf)
{
	int		y;
	char	*str;

	str = ft_strcpy(buf->str, ft_strlen(buf->str1), 0);
	y = 0;
	buf->d = ft_strlen(buf->str) - ft_strlen(buf->str1);
//	if (buf->cpt2 > 0 && buf->cpt1 < 1)
//		y -= buf->negatif;
	(!buf->negatif) ? 0 : ft_add('-', &str);
	while (buf->cpt2 > y++)
		ft_add('0', &str);
	ft_free_strjoin(str, buf->str + buf->flag + buf->negatif, &buf->str);
	free(str);
}
