/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 21:47:14 by rramirez          #+#    #+#             */
/*   Updated: 2017/02/03 21:18:29 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	n;

	n = size;
	while (*dst && n != 0)
	{
		dst++;
		n--;
	}
	if (n == 0)
		return (*dst);
	else
	{
		while (n > 1)
		{
			*dst = *src;
			dst++;
			src++;
			n--;
		}
		*dst = '\0';
		return (*dst);
	}
}
