/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/28 10:54:54 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/28 13:49:40 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
#include <ctype.h>

int		ft_toupper(int c);
int		ft_tolower(int c);

int main()
{
   int i = 0;
   char str[] = "Tutorials Point";
   
   while(str[i])
   {
	  //putchar (toupper(str[i]));
      //putchar (ft_toupper(str[i]));
	  //putchar (tolower(str[i]));
	  putchar (ft_tolower(str[i]));
	  i++;
   }
   return(0);
}
