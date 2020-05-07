/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shorter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 04:19:12 by lchristo          #+#    #+#             */
/*   Updated: 2020/05/06 19:53:46 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "res.h"


void		ft_shorter(const char *s, va_list ap, t_buffer *buf)
{
	buf->i++;
	buf->str1 = ft_strcpy(buf->str, ft_strlen(buf->str), 0);
	ft_cpt1(s, ap, buf);
	(ft_flag(s[buf->i])) ? buf->pres = buf->i : 0;
	(ft_flag(s[buf->i])) ? buf->i++ : 0;
	ft_cpt2(s, ap, buf);
	buf->flag = ft_strlen(buf->str);
	ft_var(s, ap, buf);
	ft_zerosupp(buf);
	(s[buf->i] == 's') ? ft_shorter_minus(s, buf) : 0;
	ft_calculus(buf);
//	printf("[%d] [%d]\n\n", buf->cpt1, buf->cpt2); //T186
	while (buf->cpt1-- > 0)
		ft_add(' ', &buf->str);
	(!ft_flag(s[buf->pres] && buf->rb2 == 0)) ? ft_varus(s, buf) : 0;
	free(buf->str1);
}

long		ft_swap_star(va_list ap, t_buffer *buf)
{
	long i;

	i = va_arg(ap, long);
	buf->i += 1;
	return (i);
}

void		ft_shorter_minus(const char *s, t_buffer *buf)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_strcpy(buf->str1, ft_strlen(buf->str1), 0);
	buf->d = ft_strlen(buf->str) - ft_strlen(buf->str1);
	if (s[buf->pres] == '.' && (!buf->rb2 || buf->cpt2 == 0))
	{
		while (i < buf->cpt2 && i < buf->d)
		{
			ft_add(buf->str[buf->flag + i], &str);
			i++;
		}
		free(buf->str);
		buf->str = ft_strcpy(str, ft_strlen(str), 0);
		buf->cpt2 = 0;
	}
	free(str);
}

void		ft_add(char s, char **str)
{
	char	string[2];

	string[0] = s;
	string[1] = '\0';
	ft_free_strjoin(*str, (char *)&string, str);
}

void		ft_zerotwo(const char *s, t_buffer *buf)
{
	char	*str;
	int		i;

	i = 0;
	if (s[buf->i] == '.')
	{
		(buf->cpt1 < 0) ? buf->cpt1 = 0 : 0;
		i = ft_strlen(buf->str) - buf->cpt1 - buf->d;
		str = ft_strcpy(buf->str, i, 0);
		while (buf->cpt2-- > 0)
		{
			ft_add(' ', &str);
		}
		ft_free_strjoin(str, buf->str + i, &buf->str);
		free(str);
	}
	else
		ft_varus(s, buf);
}


int		ft_zerocal(t_buffer *buf)
{
	int a;

	a = 0;
	((buf->rb2 == -1) || (buf->rb == -1 && buf->rb2 == -1)) ? a = 1 : 0;
	return (a);
}

void		ft_zerosupp(t_buffer *buf)
{
	if (ft_zerocal(buf) && buf->str[ft_strlen(buf->str) - 1] == '0')
	{
		free(buf->str);
		buf->str = ft_strcpy(buf->str1, ft_strlen(buf->str1), 0);
		buf->d = 0;
	}
}

void		ft_zero(const char *s, va_list ap, t_buffer *buf)
{
	int		a;
	int 	y;
	int		cpt1;

	y = 0;
	buf->i++;
	buf->str1 = ft_strcpy(buf->str, ft_strlen(buf->str), 0);
	ft_cpt1(s, ap, buf);
	(ft_flag(s[buf->i])) ? buf->pres = buf->i : 0;
	(ft_flag(s[buf->i])) ? buf->i++ : 0;
	ft_cpt2(s, ap, buf);
	cpt1 = buf->cpt1;
	ft_var(s, ap, buf);
	a = ft_zerocal(buf);
	ft_zerosupp(buf);
	(buf->negatif == 1 && !a) ? ft_add('-', &buf->str1) : 0;
	ft_calculus(buf);
	if (buf->rb2 == -1 && cpt1 > buf->d)
		buf->cpt1 += buf->negatif;
   	buf->cpt1 -= buf->negatif;
	while (buf->cpt1 > y++)
	{
		if (!buf->rb)
			ft_add((a) ? ' ' : '0', &buf->str1);
		else
			ft_add(' ', &buf->str);
	}
	y = ft_strlen(buf->str) - buf->d;
	(!buf->rb) ? ft_free_strjoin(buf->str1, buf->str + y, &buf->str) : 0;
	(buf->cpt2 > 0) ? ft_varus(s, buf) : 0;
	free(buf->str1);
}

void		ft_cap(t_buffer *buf)
{
	int i;

	if (!buf->rb || buf->cpt1 == 0)
	{
		i = ft_strlen(buf->str);
		buf->d = ft_strlen(buf->str) - ft_strlen(buf->str1);
		while (buf->d - buf->cpt1 >= 0)
		{
			buf->str[i] = '\0';
			i--;
			buf->cpt1++;
		}
	}
}

void		ft_dot(const char *s, va_list ap, t_buffer *buf)
{
	int		i;
	int		y;
	int		p;

	p = 0;
	y = 0;
	i = buf->i++ - 1;
	p = buf->cpt1;
	buf->str1 = ft_strcpy(buf->str, ft_strlen(buf->str), 0);
	ft_cpt1(s, ap, buf);
	(ft_flag(s[buf->i])) ? buf->pres = buf->i : 0;
	(ft_flag(s[buf->i])) ? buf->i++ : 0;
	ft_cpt2(s, ap, buf);
	ft_var(s, ap, buf);
	ft_zerosupp(buf);
	buf->d = ft_strlen(buf->str) - ft_strlen(buf->str1);
	(buf->cpt1 > buf->cpt2 && buf->cpt1 >= buf->d) ? y -= buf->negatif : 0;
	(!ft_test(s, buf->i))? ft_cap(buf) : 0;
	ft_calculus(buf);
	(buf->negatif == 1) ? ft_add('-', &buf->str1) : 0;
	while ((buf->cpt1  > y++) && (ft_test(s, buf->i)))
		(buf->rb) ? 0 : ft_add('0', &buf->str1);
	i = ft_strlen(buf->str) - buf->d + buf->negatif;
	if (buf->str[i] == '0' && buf->cpt1 == -1 &&  p == 0)
		i++;
	(!buf->rb) ? ft_free_strjoin(buf->str1, buf->str + i, &buf->str) : 0;
	free(buf->str1);
}
