/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 15:02:09 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/15 17:39:10 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h> /*remove this later*/

typedef struct		s_list
{
	void	*content;
	size_t	content_size;
	struct	s_list	*next;
}					t_list;

char	*ft_strnstr(const char *str, const char *to_find, size_t len);
#endif
