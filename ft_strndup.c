/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/27 11:09:40 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/27 11:31:20 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char		*ft_strndup(const char *s, size_t n)
{
	char	*res;
	size_t	i;

	if (s == 0)
		return (0);
	res = ft_strnew(n);
	if (res == 0)
		return (0);
	i = 0;
	while (i < n && s[i] != 0)
	{
		res[i] = s[i];
		i++;
	}
	return (res);
}
