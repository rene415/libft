/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 16:01:13 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/29 16:40:23 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned char	*s;

	s = (unsigned char *)str;
	while (*s)
		s++;
	if (*s == '\0')
		s--;
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s--;
	}
	return (0);
}
