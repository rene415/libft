/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 20:44:43 by rramirez          #+#    #+#             */
/*   Updated: 2017/02/11 17:44:22 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned const char *s1_tmp;
	unsigned const char *s2_tmp;

	s1_tmp = (unsigned const char*)s1;
	s2_tmp = (unsigned const char*)s2;
	while (*s1_tmp == *s2_tmp && n > 0 && *s2_tmp)
	{
		s1_tmp++;
		s2_tmp++;
		n--;
	}
	if (s1_tmp - s2_tmp == 0)
		return (1);
	else
		return (0);
}
