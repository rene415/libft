/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 19:13:38 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/28 19:58:57 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strncat(char *dst, const char *src, size_t n);

int main ()
{
   char src[50], dst[50];

   strcpy(src,  "This is source");
   strcpy(dst, "This is destination");

   ft_strncat(dst, src, 3);
//   strncat(dest, src, 5);

   printf("Final destination string : |%s|", dst);
   
   return(0);
}
