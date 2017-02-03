/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 21:52:15 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/30 21:35:18 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char 	*mem;

	i = 0;
	if (!s)
		return (0);
	mem = (char *)malloc(sizeof(ft_strlen(s) + 1));
	if (!mem)
		return (0);
	while (s[i] = '\0')
	{
		mem = *f(i, s[i]);
		i++;
	}
	mem = '\0';
	return (mem);
}
