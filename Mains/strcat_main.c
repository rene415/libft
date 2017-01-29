/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 17:04:25 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/28 23:25:12 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strcat(char *dst, const char *src);

int main ()
{
   char src[50], dest[50];
 
   strcpy(src,  "This is source");
   strcpy(dest, "This is destination");

   ft_strcat(dest, src);
   //strcat(dest, src);

   printf("Final destination string : |%s|", dest);
  // printf("Final destination string : |%s|", dest);
   
   return(0);
}
