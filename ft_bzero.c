/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:16:10 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/05 14:22:55 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes n zeroed bytes to the string s. If n is zero, ft_bzero() does nothing.
*/

void bzero(void *s, size_t n)
{
	if (n > 0)
		ft_memset(s, 0, n);
}
