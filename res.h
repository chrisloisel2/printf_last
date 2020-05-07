/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   res.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 02:00:33 by lchristo          #+#    #+#             */
/*   Updated: 2020/05/06 23:54:06 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RES_H
# define RES_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct	s_buffeur
{
	char	*str;
	char	*str1;
	int		cpt1;
	int		negatif;
	int		cpt2;
	int		d;
	int		g;
	int		minus;
	int		flag;
	int		i;
	int		rb;
	int		rb2;
	int		pres;
	int		modulo;
	int		div;
}				t_buffer;

void			ft_zerosupp(t_buffer *buf);
int				ft_alpha(char c);
int				ft_cpt1(const char *s, va_list ap, t_buffer *buf);
int				ft_cpt2(const char *s, va_list ap, t_buffer *buf);
long			ft_swap_star(va_list ap, t_buffer *buf);
void			ft_calculus(t_buffer *buf);
void			ft_complx(const char *s, va_list ap, t_buffer *buf);
void			ft_shorter_minus(const char *s, t_buffer *buf);
void			ft_clean(t_buffer *buf);
int				ft_flag(char c);
void			ft_bzero(void *s, size_t n);
void			ft_star(const char *s, va_list ap, t_buffer *buf);
void			ft_zero(const char *s, va_list ap, t_buffer *buf);
void			ft_dot(const char *s, va_list ap, t_buffer *buf);
void			ft_dot2(t_buffer *buf);
int				ft_intlen(long c);
char			*ft_strjoin(char *s1, char *s2);
void			ft_free_strjoin(char *s1, char *s2, char **leaks);
void			ft_add(char s, char **str);
int				ft_strlen(const char *s);
void			ft_putnbr4(void *n, t_buffer *buf);
int				ft_isalnum(int c);
void			ft_putnbr3(void *n, t_buffer *buf);
void			ft_var(const char *s, va_list ap, t_buffer *buf);
int				ft_test(const char *s, int trd);
void			ft_shorter(const char *s, va_list ap, t_buffer *buf);
void			ft_shorter2(const char *s, t_buffer *buf);
char			*ft_strcpy(char *str, int x, int y);
int				ft_atoi(const char *str);
int				ft_check(char str);
int				ft_isdigit(int c);
void			ft_point(void *n, t_buffer *buf);
char			*ft_puthexa(long nb, t_buffer buf);
void			ft_puthexmaj(long nb);
void			ft_putnbr(int nb, t_buffer *buf, const char *s);
void			ft_putnbr2(int nb, t_buffer *buf);
void			ft_putchar(char c);
void			ft_putstr(char *s, t_buffer *buf);
int				ft_printf(const char *s, ...);
char			ft_put_unsigned_nbr(long nbr, t_buffer buf);
void			ft_varius(const char *s, t_buffer *buf);
void			ft_varus(const char *s, t_buffer *buf);

#endif
