/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 21:52:29 by rramirez          #+#    #+#             */
/*   Updated: 2017/02/11 01:05:52 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int i;
	unsigned const char *s1_tmp;
	unsigned const char *s2_tmp;

	s1_tmp = (unsigned const char*)s1;
	s2_tmp = (unsigned const char*)s2;
	i = 0;
	while (s1_tmp[i] == s2_tmp[i] && i < (n - 1) && s1_tmp[i] && s2_tmp[i])
		i++;
	return (s1_tmp[i] - s2_tmp[i]);
}
