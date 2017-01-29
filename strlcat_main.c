/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 22:03:11 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/29 00:31:34 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t		ft_strlcat(char *dst, const char *src, size_t size);

int		main()
{
	char src[80], dst [80];

	strcpy(src, "This is src");
	strcpy(dst, "This is dst");

//	strlcat(dst, src, 12);
	ft_strlcat(dst, src, 12);

	printf("final shit is : |_%s_|", dst);
}

