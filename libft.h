/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcreevey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 13:50:22 by rcreevey          #+#    #+#             */
/*   Updated: 2020/11/23 13:30:44 by rcreevey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(const char *str);
void	*ft_calloc(size_t num, size_t size);
int		ft_isalnum(int smb);
int		ft_isalpha (int smbl);
int		ft_isascii(int smb);
int		ft_isdigit(int nmb);
int		ft_isprint(int smb);
char	*ft_strchr(const char *str, int symbol);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strrchr(char *str, int symbol);
char	*ft_strnstr(const char *str, const char *find, size_t len);
size_t	ft_strlcpy (char *src, const char *dst, size_t size);
int		ft_strlen(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *str);
char	**ft_split(char const *s, char c);
void	ft_bzero(void *src, size_t num);
void	*ft_memcpy(void *dst, const void *src, size_t num);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t num);
int		ft_memcmp(const void *memptr1, const void *memptr2, size_t num);
void	*ft_memchr(const void *arr, int c, size_t n);
char	*ft_itoa(int n);
void	*ft_memset(void *src, int smb, size_t val);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_tolower(int smb);
int		ft_toupper(int smb);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strtrim(char const *s1, char const *set);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int num, int fd);

#endif
