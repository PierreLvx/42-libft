/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:18:37 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/05 13:35:19 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** Writes len bytes of value c (converted to an unsigned char) to the string b.
** The function returns its first argument.
*/

void *ft_memset(void *b, int c, size_t len)
{
	size_t bytes;

	bytes = 0;
	while (bytes < len)
	{
		((char *)b)[bytes] = (unsigned char)c;
		bytes++;
	}
	return (b);
}
