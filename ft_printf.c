/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 01:38:40 by lchristo          #+#    #+#             */
/*   Updated: 2020/04/28 06:47:41 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "res.h"

void		ft_putchar_cast(char c)
{
	write(1, &c, 1);
}

int			ft_cast(t_buffer *buf)
{
	int		i;

	i = 0;
	while (buf->str[i] != '\0')
	{
		ft_putchar_cast(buf->str[i]);
		i++;
	}
	free(buf->str);
	return (i);
}

int			ft_alpha(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void		ft_dividus(t_buffer *buf)
{
	if (buf->cpt2 - buf->d > 0)
		buf->cpt1 += buf->cpt2 - buf->d;
	buf->cpt1 -= buf->cpt2;
}

void		ft_pdc_dot(t_buffer *buf)
{
	int		i;
	char	*str;
	int		cp;

	cp = ft_strlen(buf->str1);
	i = 0;
	str = ft_strcpy(buf->str1, ft_strlen(buf->str1), 0);
	while (buf->cpt2 > i && buf->str[buf->flag + i])
	{
		ft_add(buf->str[buf->flag + i], &str);
		i++;
	}
	ft_free_strjoin(buf->str1, str + cp, &buf->str);
	free(str);
}

void		ft_azero(t_buffer *buf)
{
	char *str;

	str = ft_strcpy(buf->str1, ft_strlen(buf->str1), 0);
	(buf->negatif) ? ft_add('-', &str) : 0;
	while (buf->cpt2-- > 0)
	{
		ft_add('0', &str);
	}
	ft_free_strjoin(str, buf->str + buf->flag + buf->negatif, &buf->str);
	free(str);
}

void		ft_pdc(const char *s, va_list ap, t_buffer *buf)
{
	int		i;

	i = ft_strlen(buf->str);
	buf->cpt1 = ft_atoi(s + buf->i);
	buf->i += ft_intlen(buf->cpt1);
	buf->str1 = ft_strcpy(buf->str, ft_strlen(buf->str), 0);
	(!(s[buf->i] == '.')) ? ft_var(s, ap, buf) : 0;
	if (s[buf->i] == '.')
	{
		buf->i++;
		buf->cpt2 = ft_atoi(s + buf->i);
		buf->i += ft_intlen(buf->cpt2);
		buf->flag = ft_strlen(buf->str);
		ft_var(s, ap, buf);
		buf->d = ft_strlen(buf->str) - i;
		(ft_test(s, buf->i)) ? ft_calculus(buf) : ft_dividus(buf);
		(ft_test(s, buf->i)) ? ft_azero(buf) : ft_pdc_dot(buf);
	}
	else
		ft_calculus(buf);
//	(buf->d == 0)? buf->cpt1-- : 0;
	while (buf->cpt1-- > 0)
		ft_add(' ', &buf->str1);
	ft_free_strjoin(buf->str1, buf->str + i, &buf->str);
	free(buf->str1);
}

void		ft_var(const char *s, va_list ap, t_buffer *buf)
{
	(s[buf->i] == '0' && s[buf->i + 1] == '-') ? buf->i++ : 0;
	(s[buf->i] == 'p') ? ft_point(va_arg(ap, void *), buf) : 0;
	(s[buf->i] == 'X') ? ft_putnbr4(va_arg(ap, void *), buf) : 0;
	(s[buf->i] == 'x') ? ft_putnbr3(va_arg(ap, void *), buf) : 0;
	(s[buf->i] == 'u') ? ft_putnbr2(va_arg(ap, unsigned int), buf) : 0;
	(s[buf->i] == 'd') ? ft_putnbr(va_arg(ap, int), buf) : 0;
	(s[buf->i] == 'i') ? ft_putnbr(va_arg(ap, int), buf) : 0;
	(s[buf->i] == 's') ? ft_putstr(va_arg(ap, char *), buf) : 0;
	(s[buf->i] == 'c') ? ft_add(va_arg(ap, int), &buf->str) : 0;
	(s[buf->i] == '%') ? ft_add('%', &buf->str) : 0;
	(s[buf->i] == '*') ? ft_star(s, ap, buf) : 0;
	(s[buf->i] == '-') ? ft_shorter(s, ap, buf) : 0;
	(s[buf->i] == '0') ? ft_zero(s, ap, buf) : 0;
	(s[buf->i] == '.') ? ft_dot(s, ap, buf) : 0;
	(ft_alpha(s[buf->i])) ? ft_pdc(s, ap, buf) : 0;
	(s[buf->i] == '\0') ? buf->i-- : 0;
	va_end(ap);
}

char		*ft_snif(const char *s, va_list ap, t_buffer buf)
{
	buf.i = 0;
	while (s[buf.i] != '\0')
	{
		ft_clean(&buf);
		if (s[buf.i] == '%')
		{
			buf.i++;
			ft_var(s, ap, &buf);
		}
		else
			ft_add(s[buf.i], &buf.str);
		buf.i++;
	}
	return (buf.str);
}

int			ft_printf(const char *s, ...)
{
	va_list		ap;
	t_buffer	buf;
	int			i;

	buf.str = malloc(sizeof(char) * 2);
	buf.str[0] = '\0';
	buf.str[1] = '\0';
	va_start(ap, s);
	buf.str = ft_snif(s, ap, buf);
	i = ft_cast(&buf);
	return (i);
}
