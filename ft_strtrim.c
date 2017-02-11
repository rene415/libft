/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 20:51:26 by rramirez          #+#    #+#             */
/*   Updated: 2017/02/10 15:38:34 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*mem;

	i = 0;
	j = 0;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	i = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	mem = (char *)malloc(sizeof(char) * (i + 1));
	mem[i + 1] = '\0';
	while (j < i + 1)
	{
		mem[j] = s[j];
		j++;
	}
	return (mem);
}
