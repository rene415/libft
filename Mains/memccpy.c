/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memeccpy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 14:15:12 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/23 15:16:44 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dst, void *src, int c, size_t n);

int main ()
{
   char src[50] = "ttp://www.tutorialspoint.com";
   const char src2[50] = "ttp://www.tutorialspoint.com";
   char dest[50];
   char dst[50];

   ft_memccpy(dst, src, 's', 1);
   memccpy(dest, src2, 's', 1);
   printf("After memccpy dest = %s\n", dest);
   printf("After ft_memccpy dst = %s\n", dst);
   
   return(0);
}
