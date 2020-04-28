/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 02:06:43 by lchristo          #+#    #+#             */
/*   Updated: 2020/03/12 18:03:36 by lchristo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "res.h"

void	ft_putstr(char *s, t_buffer *buf)
{
	int i;

	i = 0;
	if (s == NULL)
		ft_free_strjoin(buf->str, "(null)", &buf->str);
	else
	{
		while (s[i] != '\0')
		{
			ft_add(s[i], &buf->str);
			i++;
		}
	}
}
