/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_zerochi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:37:18 by lchristo          #+#    #+#             */
/*   Updated: 2020/04/25 07:39:05 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "res.h"

void		ft_minus(const char *s, va_list ap, t_buffer *buf)
{
	int	t;
	int	i;
	int cp;

	t = buf->i;
	i = 0;
	(buf->cpt1 < 0) ? buf->cpt1 *= -1 : 0;
	if (ft_flag(s[buf->i]))
	{
		buf->cpt2 = ft_atoi(s + buf->i + 1);
		buf->i += 1 + ft_intlen(buf->cpt2);
	}
	ft_var(s, ap, buf);
	ft_calculus(buf);
	cp = ft_strlen(buf->str) - buf->d + buf->negatif;
	while (buf->cpt1-- > 0)
		ft_add(' ', &buf->str);
	buf->i = t;
	buf->flag = cp;
	ft_varius(s, buf);
	free(buf->str1);
}

void		ft_varius(const char *s, t_buffer *buf)
{
	int		a;
	char	*str;

	str = ft_strcpy(buf->str, buf->flag, 0);
	a = 0;
	if (s[buf->i++] == '.')
	{
		a = ft_atoi(s + buf->i);
		buf->i = buf->i + ft_intlen(a);
		buf->i = (ft_intlen(a) == 0) ? buf->i + 1 : buf->i;
		a -= buf->d;
		a += buf->negatif;
		while ((buf->cpt2-- > 0) && (ft_test(s, buf->i)))
			ft_add('0', &str);
		a = 0;
		ft_free_strjoin(str, buf->str + buf->flag, &buf->str);
	}
	else
		buf->i--;
	free(str);
}

void		ft_varus(const char *s, va_list ap, t_buffer *buf)
{
	buf->i = buf->i + ft_intlen(ft_atoi(s + buf->i));
	(s[buf->i] == '*') ? ft_star(s, ap, buf) : 0;
	(s[buf->i] == '-') ? ft_shorter2(s, buf) : 0;
	(s[buf->i] == '.') ? ft_dot2(s, buf) : 0;
	va_end(ap);
}

void		ft_star(const char *s, va_list ap, t_buffer *buf)
{
	int	i;
	int	t;

	t = buf->i++;
	i = 0;
	buf->cpt1 = va_arg(ap, long);
	buf->str1 = ft_strcpy(buf->str, ft_strlen(buf->str), 0);
	if (buf->cpt1 < 0)
		ft_minus(s, ap, buf);
	else
	{
		ft_complx(s, ap, buf);
		ft_calculus(buf);
		while (buf->cpt1 > i++)
			ft_add(' ', &buf->str1);
		i = ft_strlen(buf->str) - buf->d;
		ft_free_strjoin(buf->str1, buf->str + i, &buf->str);
		buf->i = t + 1;
		buf->flag = ft_strlen(buf->str) - buf->d + buf->negatif;
		(buf->cpt2) ? ft_varius(s, buf) : 0;
		free(buf->str1);
	}
}

void		ft_complx(const char *s, va_list ap, t_buffer *buf)
{
	(ft_flag(s[buf->i])) ? buf->cpt2 = ft_atoi(s + buf->i + 1) : 0;
	(ft_flag(s[buf->i])) ? buf->i += 1 + ft_intlen(buf->cpt2) : 0;
	ft_var(s, ap, buf);
}
