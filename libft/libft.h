/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:00:44 by jianliew          #+#    #+#             */
/*   Updated: 2024/04/25 19:31:25 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

void			ft_bzero(void	*ptr, int size);
void			*ft_calloc(size_t num, size_t size);
int				ft_isalnum(int a);
int				ft_isalpha(int a);
int				ft_isascii(int a);
int				ft_isdigit(int a);
int				ft_isprint(int a);
int				ft_isalnum(int a);
void			*ft_memchr(const void	*str, int ch, int size);
int				ft_memcmp(const void	*str, const void	*str2, int size);
void			*ft_memcpy(void	*to, const void *from, size_t size);
void			*ft_memmove(void	*to, const void	*from, size_t size);
void			*ft_memset(void	*ptr, int ch, int size);
char			**ft_split(char const *s, char c);
char			*ft_strchr(const char *str, int ch);
void			ft_striteri(char	*s, void (*f)(unsigned int, char *));
int				ft_strlen(const char *str);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strrchr(const char *str, int ch);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_tolower(int ch);
int				ft_toupper(int ch);
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size);
unsigned int	ft_strlcat(char *dest, const char *src, size_t size);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
char			*ft_strnstr(const char *str, const char *to_find, size_t n);
int				ft_atoi(const char *str);
char			*ft_strdup(const char *src);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int nb, int fd);
char			*ft_itoa(int n);
char			*ft_strjoin(char const *s1, char const *s2);

#endif
