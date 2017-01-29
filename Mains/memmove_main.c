/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 15:12:44 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/28 10:30:29 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len);

int main ()
{
   char dest[] = "oldstring";
   char dst[] = "oldstring";
   const char src[]  = "newstring";
   const char src2[] = "newstring";

   printf("Original Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 9);
   printf("Original After memmove dest = %s, src = %s\n", dest, src);
   printf("\n");
   printf("Mine Before ft_memmove dst = %s, src = %s\n", dst, src2);
   ft_memmove(dst, src, 9);
   printf("Mine After ft_memmove dst = %s, src = %s\n", dst, src2);

   return(0);
}
