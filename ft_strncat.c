/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 19:04:53 by rramirez          #+#    #+#             */
/*   Updated: 2017/02/10 16:16:31 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	while (*dst)
		dst++;
	while (n > 0)
	{
		*dst = *src;
		dst++;
		src++;
		n--;
	}
	*dst = '\0';
	return (dst);
}
