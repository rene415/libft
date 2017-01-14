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

