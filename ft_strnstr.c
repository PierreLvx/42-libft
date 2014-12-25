/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:41:23 by plavaux           #+#    #+#             */
/*   Updated: 2014/12/25 17:46:01 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*cpy;
	char	*buf;
	size_t	length;

	buf = (char *)(s1 + n);
	length = ft_strlen(s2);
	cpy = (char *)s1;
	if (!s1 || !s2 || !length)
		return ((char *)s1);
	while ((cpy = ft_strchr(cpy, *s2)) && cpy <= buf)
	{
		if ((cpy + length <= buf) && !ft_strncmp(cpy, s2, length))
			return (cpy);
		cpy++;
	}
	return (NULL);
}
