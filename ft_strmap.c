/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 21:52:06 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/13 21:52:07 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*mem;

	if (!s)
		return (0);
	mem = (char *)malloc(sizeof(ft_strlen(s) + 1));
	if (!mem)
		return (0);
	while (*s)
	{
		*mem = f(*s);
		s++;
		mem++;
	}
	*mem = '\0';
	return (mem);
}
