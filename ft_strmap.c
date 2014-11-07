/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:40:17 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/07 16:24:25 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** Apply the function f to each character of the parameter string,
** create a new string with the result, and return it.
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	len;
	size_t	i;
	char	*fresh;

	fresh = NULL;
	if (s && f)
	{
		len = ft_strlen(s);
		i = 0;
		fresh = (char *)malloc(sizeof(char) * (len + 1));
		if (fresh)
		{
			while (i < len)
			{
				fresh[i] = f(s[i]);
				i++;
			}
			fresh[i] = '\0';
		}
	}
	return (fresh);
}
