#include "libft.h"

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	while (s1[i] == s2[i] && i < (nb - 1))
		i++;
	return(s1[i] - s2[i]);
}
