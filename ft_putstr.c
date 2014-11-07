/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:11:31 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/07 17:44:36 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

/*
** Print the string s on standard output.
*/

void	ft_putstr(char const *s)
{
	if (s != NULL)
		write(1, s, ft_strlen(s));
}
