/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 10:42:02 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/28 15:01:51 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n);

int main ()
{
   const char str[] = "Mrpizzaman.com";
   const char str2[] = "Mrpizzaman.com";
   const char ch = '.';
   const char ch2 = '.';
   char *retx;
   char *ret;

   ret = memchr(str, ch, strlen(str));
   retx = ft_memchr(str2, ch2, strlen(str2));

   printf("String after |%c| is - |%s|\n", ch, ret);
   printf("String after |%c| is - |%s|\n", ch2, retx);
   return(0);
}
