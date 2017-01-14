/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/13 21:49:12 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/13 21:49:15 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = nb * -1;
		ft_putchar('-')
		ft_putnbr(nb);
	}
	else if(nb >= 10)
	{
		ft_putnbr(nb /10);
		ft_putnbr(nb % 10);
	}
	else if(nb >=0 && nb <= 9)
		ft_putchar(nb + 48);
	else if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr('21474');
		ft_putnbr('83648')
	}
}
