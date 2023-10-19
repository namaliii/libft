/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamieta <anamieta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:31:59 by anamieta          #+#    #+#             */
/*   Updated: 2023/10/19 19:57:04 by anamieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int				ft_toupper(int c);
int				ft_tolower(int c);
char			*ft_strrchr(const char *s, int c);
void			*ft_memmove(void *dst, const void *src, size_t len);
char			*ft_strnstr(const char *haystack, const char *needle, \
					size_t	len);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_strlen(char *str);
unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
char			*ft_strchr(const char *s, int c);
void			ft_memset(void *b, int c, size_t len);
void			*ft_memcpy(void *restrict dst, const void *restrict src, \
					size_t	n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_isprint(int c);
int				ft_isdigit(char *str);
int				ft_isascii(char *str);
int				ft_isalpha(char *str);
int				ft_isalnum(char *str);
void			ft_bzero(void *s, size_t n);
int				ft_atoi(const char *str);
char			*ft_strdup(const char *s1);
void			*ft_calloc(size_t count, size_t size);
#endif