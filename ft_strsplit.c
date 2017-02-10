/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 20:47:33 by rramirez          #+#    #+#             */
/*   Updated: 2017/02/05 00:20:10 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_letters(char const *s, char c)
{
		size_t	i;

		i = 0;
		while (s[i] != '\0' && s[i] != c)
			i++;
		return (i);
}

char	**ft_strsplit(char const *s, char c)
{
	size_t	words;
	size_t	letters;
	size_t	c_word;
	char	**mem;
	size_t	i;
	
	i = 0;
	letters = ft_letters(s, c);
	words = ft_word_count(s, c);
	mem = (char **)malloc(sizeof(char *) * words + 1);
	while (*s)
	{
		if (*s != c)
		{
			c_word = 0;
			mem[c_word] = (char *)malloc(sizeof(char) * (letters + 1));
			while (ft_letters(s, c) > 0)
				mem[c_word][i++] = *s++;
			mem[c_word][i] = '\0';
			c_word++;
		}	
		else
			s++;
	}
	mem[c_word] = 0;
	return (mem);
}
