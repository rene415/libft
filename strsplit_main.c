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

char	**ft_strsplit(const char *s, char c);

int		main()
{
	char *s;
	char c;

	s = "__test_test__";
	c = '_';
	printf("%c\n", **ft_strsplit(s, c));
	return (0);
}

