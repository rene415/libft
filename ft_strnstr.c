/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 10:01:38 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/29 21:53:52 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	char *i;
	char *a;
	const char *s;

	i = (char *)str;
	a = (char *)to_find;
	s = i + len;
	while (*str && str <= s)
	{
		i = (char *)str;
		if (*str == *to_find)
		{
			while (*i && *a && *i == *a && (i < s))
			{
				i++;
				a++;
			}
		}
		if (!*a)
			return ((char *)str);
		a = 0;
		a = (char *)to_find;
		str++;
	}
	return (0);
}
