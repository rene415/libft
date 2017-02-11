/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 20:49:27 by rramirez          #+#    #+#             */
/*   Updated: 2017/02/10 15:38:02 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *mem;

	if (!s)
		return (0);
	mem = (char *)malloc(sizeof(char) * (len + 1));
	if (!mem)
	{
		free(mem);
		return (0);
	}
	while (len > 0)
	{
		*mem = s[start];
		mem++;
		start++;
		len--;
	}
	*mem = '\0';
	return (mem);
}
