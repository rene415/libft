/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpymain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/14 09:23:55 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/22 18:11:11 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *str, unsigned int n);

int main()
{
	char dest [] = "";
	char src [] = "burritos";
	printf("%s\n",ft_strncpy(dest, src, 3));
	return(0);
}
