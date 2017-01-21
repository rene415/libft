#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t i;

	if (n == 0)
		return ;
	else
		while (i < n)
		{
			((char *)s)[i] = 0;
			i++;
		}
}
