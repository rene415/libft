/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsub_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 21:29:26 by rramirez          #+#    #+#             */
/*   Updated: 2017/02/10 21:57:46 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len);

int main()
{
	char s[20] = "FUUCKCKTHIS";
	unsigned int start;
	size_t len;

	start = 2;
	len = 6;
	printf("%s\n",ft_strsub(s, start, len));
}
