/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:35:32 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/03 18:41:47 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prints the string s to the file descriptor fd, followed by a '\n'.
*/

void	ft_putendl_fd(char const *s)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
