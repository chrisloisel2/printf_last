/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shorter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 04:19:12 by lchristo          #+#    #+#             */
/*   Updated: 2020/04/28 06:39:03 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "res.h"

void		ft_shorter(const char *s, va_list ap, t_buffer *buf)
{
	int		save;

	save = 0;
	buf->cpt1 = ft_atoi(s + ++buf->i);
	buf->str1 = ft_strcpy(buf->str, ft_strlen(buf->str), 0);
	buf->i = buf->i + ft_intlen(buf->cpt1);
	save = buf->i;
	(ft_flag(s[save])) ? ft_shorter_minus(s, buf, -1) : 0;
	buf->flag = ft_strlen(buf->str);
	ft_var(s, ap, buf);
	buf->d = ft_strlen(buf->str) - buf->flag;
	(buf->d == 0)? buf->cpt1-- : 0;
	(s[buf->i] == 's') ? ft_shorter_minus(s, buf, save) : 0;
	ft_calculus(buf);
	while (buf->cpt1-- > 0)
		ft_add(' ', &buf->str);
	(ft_flag(s[save]) && s[buf->i] != 's') ? buf->i = save : 0;
	(buf->cpt2 != 0) ? ft_varus(s, ap, buf) : 0;
	free(buf->str1);
}

void		ft_shorter_minus(const char *s, t_buffer *buf, int g)
{
	int		i;
	int		y;

	y = 0;
	i = 0;
	(g == -1) ?	buf->cpt2 = ft_atoi(s + buf->i + 1) : 0;
	(g == -1) ?	buf->i += 1 + ft_intlen(buf->cpt2) : 0;
	if (s[g] == '.')
	{
		while (i < buf->cpt2)
		{
			ft_add(buf->str[buf->flag + i], &buf->str1);
			i++;
		}
		free(buf->str);
		buf->str = ft_strcpy(buf->str1, ft_strlen(buf->str1), 0);
		buf->cpt1 -= i;	
		(buf->d < buf->cpt2) ? buf->cpt1 -= (buf->d - buf->cpt2) : 0;
		buf->cpt2 = 0;
	}
}

void		ft_add(char s, char **str)
{
	char	string[2];

	string[0] = s;
	string[1] = '\0';
	ft_free_strjoin(*str, (char *)&string, str);
}

void		ft_zerotwo(const char *s, va_list ap, t_buffer *buf, int y)
{
	char	*str;
	int		i;

	i = 0;
	if (y == 1)
	{
		buf->cpt2 = ft_atoi(s + buf->i + 1);
		buf->i += ft_intlen(buf->cpt2) + 1;
	}
	else
	{
		if (s[buf->i] == '.')
		{
//			printf("cpt1 = %d, cpt2 = %d, buf->d = %d\n", buf->cpt1, buf->cpt2, buf->d);
			(buf->cpt1 < 0) ? buf->cpt1 = 0 : 0;
			i = ft_strlen(buf->str) - buf->cpt1 - buf->d;
			str = ft_strcpy(buf->str, i, 0);
			while (buf->cpt2-- > 0)
			{
				ft_add(' ', &str);
			}
//			printf("str=%s, str1=%s, neg=%d\n", buf->str, buf->str1, buf->negatif);
			ft_free_strjoin(str, buf->str + i, &buf->str);
			free(str);
//			printf("str=%s, str1=%s, neg=%d\n", buf->str, buf->str1, buf->negatif);
		}
		else
			ft_varus(s, ap, buf);
	}
}

void		ft_zero(const char *s, va_list ap, t_buffer *buf)
{
	int		a;
	int		i;
	int 	y;

	y = 0;
	i = 0;
	a = 0;
	if (s[buf->i++] == '0')
	{
		i = buf->i - 2;
		buf->str1 = ft_strcpy(buf->str, ft_strlen(buf->str), 0);
		buf->cpt1 = ft_atoi(s + buf->i);
//		printf("cpt1 = %d, cpt2 = %d, buf->d = %d\n", buf->cpt1, buf->cpt2, buf->d);
		buf->i = buf->i + ft_intlen(buf->cpt1);
		a = buf->i;
		(ft_flag(s[buf->i]))? ft_zerotwo(s, ap, buf, 1) : 0;
		ft_var(s, ap, buf);
		ft_calculus(buf);
//		printf("cpt1 = %d, cpt2 = %d, buf->d = %d\n", buf->cpt1, buf->cpt2, buf->d);
		(buf->negatif == 1)? ft_add('-', &buf->str1) : 0;
		if (ft_flag(s[a]))
		{
			buf->modulo = buf->cpt2;
			buf->cpt2 = buf->cpt1;
			buf->cpt1 = buf->modulo;
		}
		while (buf->cpt1 > y++)
			ft_add('0', &buf->str1);
		y = ft_strlen(buf->str) - buf->d + buf->negatif;
		ft_free_strjoin(buf->str1, buf->str + y, &buf->str);
		(ft_flag(s[a])) ? y = buf->i : 0;
		(ft_flag(s[a])) ? buf->i = a : 0;
		(ft_flag(s[a])) ? ft_zerotwo(s, ap, buf, 0) : 0;
		(ft_flag(s[a])) ? buf->i = y : 0;
		free(buf->str1);
	}
}

void		ft_cap(t_buffer *buf)
{
	int i;

	i = ft_strlen(buf->str);
	buf->d = ft_strlen(buf->str) - ft_strlen(buf->str1);
	while (buf->d - buf->cpt1 >= 0)
	{
		buf->str[i] = '\0';
		i--;
		buf->cpt1++;
	}
}

void		ft_dot(const char *s, va_list ap, t_buffer *buf)
{
	int		i;
	int		y;

	y = 0;
	i = buf->i++ - 1;
	while (s[buf->i] == '0')
		buf->i++;
	buf->cpt1 = ft_atoi(s + buf->i);
	buf->str1 = ft_strcpy(buf->str, ft_strlen(buf->str), 0);
	buf->i = buf->i + ft_intlen(buf->cpt1);
	buf->i += (ft_intlen(buf->cpt1) == 0) ? 1 : 0;
	(ft_flag(s[buf->i]))? ft_zerotwo(s, ap, buf, 1) : 0;
	ft_var(s, ap, buf);
	(!ft_test(s, buf->i))? ft_cap(buf) : 0;
	ft_calculus(buf);
	(buf->negatif == 1) ? ft_add('-', &buf->str1) : 0;
	(buf->negatif == 1 && buf->cpt1 >= buf->d - buf->negatif) ? y-- : 0;
	while ((buf->cpt1 > y++) && (ft_test(s, buf->i)))
		ft_add('0', &buf->str1);
	ft_free_strjoin(buf->str1, buf->str + i + buf->negatif, &buf->str);
	free(buf->str1);
}
