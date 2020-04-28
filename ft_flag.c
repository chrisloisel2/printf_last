/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/18 22:36:17 by lchristo          #+#    #+#             */
/*   Updated: 2020/04/27 05:58:46 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "res.h"

int			ft_flag(char c)
{
	if (c == '.')
		return (1);
	if (c == '0')
		return (1);
	if (c == '*')
		return (1);
	if (c == '-')
		return (1);
	return (0);
}

void		ft_shorter2(const char *s, t_buffer *buf)
{
	int		a;
	int		test;

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

void		ft_dot2(const char *s, t_buffer *buf)
{
	int		a;

	a = 0;
	if (s[buf->i++] == '.')
	{
		a = ft_atoi(s + buf->i);
		buf->i = buf->i + ft_intlen(a);
		buf->i = (ft_intlen(a) == 0) ? buf->i + 1 : buf->i;
		a = a - buf->d + buf->negatif;
		if (buf->negatif)
			ft_add('-', &buf->str1);
		while ((a-- > 0) && (ft_test(s, buf->i)))
			ft_add('0', &buf->str1);
		buf->flag += buf->negatif;
		ft_free_strjoin(buf->str1, buf->str + buf->flag, &buf->str);
	}
}
