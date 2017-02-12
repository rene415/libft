/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 16:01:13 by rramirez          #+#    #+#             */
/*   Updated: 2017/02/11 12:16:04 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char			*s;
	unsigned char	c_tmp;
	int				i;

	i = 0;
	c_tmp = (unsigned char)c;
	s = (char*)str;
	while (s[i] != '\0')
		i++;
	if (s[i] == c_tmp)
		return (&s[i]);
	if (s[i] == '\0')
		i--;
	while (s[i] != s[0])
	{
		if (s[i] == c_tmp)
			return (&s[i]);
		i--;
	}
	return (0);
}
