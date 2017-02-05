/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsplit_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/05 12:36:25 by rramirez          #+#    #+#             */
/*   Updated: 2017/02/05 12:36:28 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_word_count(const char *s, char c);

int		main()
{
	char *s;
	char c;

	s = "__test_test__";
	c = '_';
	printf("%zu\n", ft_word_count(s, c));
}