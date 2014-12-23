/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:38:00 by plavaux           #+#    #+#             */
/*   Updated: 2014/12/23 18:26:00 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** Locates the 1st occurrence of c (converted to an unsigned char) in string s.
*/

void				*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cpy;

	i = 0;
	cpy = (unsigned char *)s;
	if (s && n > 0)
		while (i < n)
		{
			if (cpy[i] == (unsigned char)c)
				return ((void*)&cpy[i]);
			i++;
		}
	return (NULL);
}
