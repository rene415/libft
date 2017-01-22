/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 21:49:25 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/21 16:03:55 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c); //remove this

void	ft_putstr(char const *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
