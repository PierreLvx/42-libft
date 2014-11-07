/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:40:50 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/07 16:23:12 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** Apply the function f to each character of the parameter string, while
** precising its index, create a new string from the result and return it.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*fresh;

	if (s && f)
	{
		len = ft_strlen(s);
		i = 0;
		fresh = (char *)malloc(sizeof(char) * (len + 1));
		if (fresh)
		{
			while (i < len)
			{
				fresh[i] = f(i, s[i]);
				i++;
			}
			fresh[i] = '\0';
		}
		return (fresh);
	}
	return (NULL);
}
