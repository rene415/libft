/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 10:01:38 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/15 10:01:42 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	char *i;
	char *a;

	i = 0;
	a = 0;
	if(!*to_find)
		return((char *)str); //If little is an empty string, big is returned
	while(*str && len --)
	{
		if (*str != *to_find)
			a = 0;
		else if(*str == *to_find)
		{
			i = (char *)str + 1;
			a = (char *)to_find + 1;
			while (*i && *a && *i == *a)
			{
				i++;
				a++;
			}
			if (!*a)
				return((char *)str);
		}
		str++;
	}
	return (0); //little occurs nowhere in big, NULL is returned
}