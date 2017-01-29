/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 15:47:44 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/21 16:03:57 by rramirez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//void	ft_putstr_fd(char const *str, int fd);
void	ft_putstr(char const *str, int fd);

int		main()
{
	ft_putstr("goodbye", 1);
//	ft_putstr_fd("hello", 1);
	return(0);
}
