/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/22 17:48:24 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/22 21:20:37 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dst, void *src, size_t n);

int main ()
{
   char src[50] = "http://www.tutorialspoint.com";
   const char src2[50] = "http://www.tutorialspoint.com";
   char dest[50];
   char dst[50];

   ft_memcpy(dst, src, strlen(src) + 1);
   memcpy(dest, src2, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   printf("After ft_memcpy dst = %s\n", dst);
   
   return(0);
}
