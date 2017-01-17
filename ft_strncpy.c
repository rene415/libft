/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 22:11:38 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/13 22:51:47 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while(i < n)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
		{
			i++;
			while (i < n)
			{
				dest[i] = '\0';
				i++;
			}
		}
		if (src[i] != '\0')
			i++;
	}
	return (dest);
}
