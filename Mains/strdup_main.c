/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 20:06:56 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/28 21:07:06 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char 	*ft_strdup(const char *str);

int main()
{
    char *p1 = "Raja";
	char *dup1 = "poo";
    char *p2;
	char *dup2;
    p2 = strdup(p1);
 	dup2 = ft_strdup(dup1);

    printf("Duplicated string is : |%s|\n", p2);
	printf("Duplicated string is : |%s|", dup2);
	return 0;
}
