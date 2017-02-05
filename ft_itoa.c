/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stritoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 20:52:57 by rramirez          #+#    #+#             */
/*   Updated: 2017/02/04 23:56:14 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	int_len(int n)
{
	size_t		i;

	i = 1;
	if (n < 0)
		n = -n;
	while (n /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*mem;
	size_t	len;

	len = int_len(n);
	if (n >= 0)
		len--;
	mem = (char *)malloc(sizeof(char) * (len + 1));
	mem[len + 1] = '\0';
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		mem[0] = '-';
		n = n  * -1;
	}
	while (n > 9)
	{
		mem[len] = (n % 10) + 48;
		len--;
		n = n / 10;
	}
	if (n >= 0 && n <= 9)
		mem[len] = n + 48;
	return (mem);
}
