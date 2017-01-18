/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstrmain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 12:35:57 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/17 16:26:25 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char	*ft_strnstr(const char *str, const char *to_find, size_t len);

int		main()
{
	char *str1;
	char *str;
	char *to_find;
	size_t len;

	str1 = "warreniscool";
	str = "warreniscool";
	to_find = "rren";
	len = 8;
	printf("builtin = %s\n", strnstr(str, to_find, len));
	printf("my func = %s\n", ft_strnstr(str1, to_find, len));
	return (0);
}
