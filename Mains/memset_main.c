/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 21:43:28 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/22 22:20:28 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

void	*ft_memset(void *b, int c, size_t len);

int main ()
{
   char str[50];
   char b[50];

   strcpy(str,"This is string.h library function");
   strcpy(b,"This is string.h library function");
   puts(str);
   puts(b);

   ft_memset(b, '$', 7);
   memset(str,'$',7);
   puts(str);
   puts(b);
   
   return(0);
}
