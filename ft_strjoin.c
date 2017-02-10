/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 20:46:09 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/30 23:24:22 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *mem;

	if (!s1 || s2)
		return (0);
	mem = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	while (*s1)
	{
		*mem = *s1;
		mem++;
		s1++;
	}
	while (*s2)
	{
		*mem = *s2;
		mem++;
		s2++;
	}
	*mem = '\0';
	return (mem);
}
