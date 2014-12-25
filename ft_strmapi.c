/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:40:50 by plavaux           #+#    #+#             */
/*   Updated: 2014/12/25 18:40:32 by plavaux          ###   ########.fr       */
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
	unsigned int	i;
	char			*fresh;

	if (!s || !f)
		return (NULL);
	fresh = ft_strnew(ft_strlen(s));
	i = 0;
	while (s[i])
	{
		fresh[i] = (*f)(i, s[i]);
		i++;
	}
	return (fresh);
}
