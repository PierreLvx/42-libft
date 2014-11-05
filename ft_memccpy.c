/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 17:48:30 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/05 17:56:57 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t bytes;

	bytes = 0;
	while (bytes < n)
	{
		*((unsigned char *)dst + bytes) = *((unsigned char *)src + bytes);
		if (*((unsigned char *)src + bytes) == (unsigned char)c)
			return ((unsigned char *)dst + bytes + 1);
		bytes++;
	}
	return (NULL);
}
