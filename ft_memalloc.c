/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 21:46:56 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/30 18:26:10 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*mem;

	i = 0;
	mem = (char *)malloc(sizeof(char) * (size + 1));
	if (size == 0)
		return (0);
	while (i < size)
	{
		mem[i] = 0;
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
