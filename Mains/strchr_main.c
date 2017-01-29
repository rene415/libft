/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 15:02:08 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/28 17:04:14 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);

int main ()
{
   const char str[] = "Helelo";
   const char str2[] = "Helelo";
   const char ch = 'e';
   const char ch2 = 'e';
   char *ret;
   char *ret2;

   ret = strrchr(str, ch);
   ret2 = ft_strrchr(str2, ch2);

   printf("String after |%c| is - |%s|\n", ch, ret);
   printf("String after |%c| is - |%s|\n", ch2, ret2); 
   
   return(0);
}
