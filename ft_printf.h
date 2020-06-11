/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   res.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 02:00:33 by lchristo          #+#    #+#             */
/*   Updated: 2020/06/12 01:35:21 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct			s_pft
{
	int		cpt;
	int		index;
	int		pres1;
	int		pres1neg;
	int		pres2;
	int		pres2neg;
	int		resultneg;
	char	*result;
	char 	flag;

}			t_pft;

int				ft_printf(const char *s, ...);
void			ft_var(const char *s, va_list *ap, t_pft *one);
void			ft_putchar(char c, t_pft *one);
void			ft_putstr(char *s, t_pft *one);
void			ft_putnbr(int nb, t_pft *one);
void			ft_putu(unsigned int nb, t_pft *one);
void			ft_puthexa_maj(long long nb, t_pft *one);
void			ft_puthexa(long long nb, t_pft *one);
void			ft_point(unsigned long p, t_pft *one);
int				ft_intlen(long c);
int				ft_atoi(const char *str);
void			ft_get_pres1(const char *s, va_list *ap, t_pft *one);
void			ft_get_pres2(const char *s, va_list *ap, t_pft *one);
void			ft_get_flag(const char *s, t_pft *one);
void			ft_get_var(const char *s, va_list *ap, t_pft *one);
void			ft_star(const char *s, va_list *ap,  t_pft *one);
void			ft_get_putnbr(int nb, t_pft *one);
void			ft_get_puthexa(long nb, t_pft *one);
void			ft_get_putu(unsigned int nb, t_pft *one);
void			ft_get_puthexa_maj(long nb, t_pft *one);
void			ft_get_putstr(char *s, t_pft *one);
void			ft_get_putchar(char c, t_pft *one);
void			ft_get_point(unsigned long p, t_pft *one);
void			ft_free_strjoin(char *s1, char *s2, char **leaks);
char			*ft_strjoin(char *s1, char *s2);
int				ft_strlen(const char *s);
void			ft_get_all(const char *s, va_list *ap, t_pft *one);
void			ft_calculus(t_pft *one);
void			ft_dot(const char *s, va_list *ap, t_pft *one);
int				ft_alpha(char c);
void			ft_minus(const char *s, va_list *ap, t_pft *one);
void			ft_zero(const char *s, va_list *ap, t_pft *one);

#endif
