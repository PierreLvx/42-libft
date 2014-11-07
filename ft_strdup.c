/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/05 10:39:22 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/07 14:28:35 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	len = ft_strlen(s1);
	str = (char *)malloc(sizeof(*s1) * (len + 1));
	ft_strcpy(str, s1);
	return (str);
}
