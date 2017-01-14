/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 21:46:28 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/13 21:46:35 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int neg;
	int nb;

	neg = 0;
	nb = 0;
	while (*str < 33)
		str++;
	if (*str == '-')
		neg++;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{	
		nb = nb * 10 + (*str - 48);
		str++;	
	}
	if (neg == 1)
		return (nb * -1);
	else
		return (nb);
}

