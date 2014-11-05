/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:40:42 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/03 18:47:24 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Prints the character c on the specified filedescriptor.
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
