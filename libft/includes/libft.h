/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:15:43 by yrabby            #+#    #+#             */
/*   Updated: 2019/04/03 13:53:11 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_A
# define LIBFT_A

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int		ft_strlen(char *str);
char	*ft_strdup(char *str);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, int i);
char	*ft_strcpy(char *dst, char *src);
char	*ft_strncpy(char *dst, char *src, unsigned int n);
char	*ft_strchr(char *str, int n);
char	*ft_strstr(char *s1, char *s2);
char	*ft_strnstr(char *s1, char *s2, unsigned int n);
int		ft_isalpha(char c);
int		ft_isdigit(char c);
int		ft_isascii(char c);
int		ft_isprint(char c);
int		ft_isalnum(char c);






#endif