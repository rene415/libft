/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rramirez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/15 15:02:09 by rramirez          #+#    #+#             */
/*   Updated: 2017/01/28 20:39:13 by rramirez         ###   ########.fr       */
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

int		ft_atoi(char *str);
void	ft_bzero(void *str, size_t n);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr(int nb);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putstr(char const *str);
void	ft_putstr_fd(char const *str, int fd);
void	ft_strclr(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
void	ft_strdel(char **as);
char 	*ft_strdup(const char *s1);
void 	ft_striter(char *str, void(*f)(char *));
void	ft_striteri(char *str, void(*f)(unsigned int, char *));
int		ft_strlen(char *str);
char	*ft_strmap(char const *str, char (*f)(char));
char	*ft_strmapi(char const *str, char (*f)(unsigned int, char));
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char 	*ft_strnew(size_t size);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*strstr(const char *str, const char *to_find);
#endif
