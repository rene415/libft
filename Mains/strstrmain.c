/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstrmain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 11:55:07 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/15 17:41:48 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find);

int		main()
{
	char str[] = "Be the best that you can be.";
	char to_find[] = "best";
	printf("%s\n", strstr(str, to_find));
	printf("%s", ft_strstr(str, to_find));
}
