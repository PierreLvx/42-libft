/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:40:29 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/03 18:44:47 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_islower(int c);
int		ft_isprint(int c);
int		ft_isupper(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
//size_t	ft_strlen(const char *s);
#endif
