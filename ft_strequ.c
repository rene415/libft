/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 20:42:32 by rramirez          #+#    #+#             */
/*   Updated: 2017/02/11 10:01:23 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(const char *s1, const char *s2)
{
	unsigned const char *s1_tmp;
	unsigned const char *s2_tmp;

	s1_tmp = (unsigned const char*)s1;
	s2_tmp = (unsigned const char*)s2;
	while (*s1_tmp == *s2_tmp && *s2_tmp != '\0')
	{
		s1_tmp++;
		s2_tmp++;
	}
	if (s1_tmp - s2_tmp == 0)
		return (1);
	else
		return (0);
}
