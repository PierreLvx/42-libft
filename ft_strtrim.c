/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:40:19 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/15 16:30:19 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t		blank_cnt(char const *s, int start, int side)
{
	size_t		count;

	count = 0;
	while (ft_isblank(s[start]))
	{
		count++;
		(side > 0) ? start++ : start--;
	}
	return (count);
}

char		*ft_strtrim(char const *s)
{
	char		*freshtr;
	size_t		start;
	size_t		len;
	size_t		index;

	if (!s)
		return (NULL);
	if (blank_cnt(s, 0, 1) == ft_strlen(s))
		return (ft_strnew(0));
	start = blank_cnt(s, 0, 1);
	len = ft_strlen(s) - blank_cnt(s, ft_strlen(s) - 1, -1) - start;
	freshtr = ft_strnew(len + 1);
	index = 0;
	if (!freshtr)
		return (freshtr);
	while (len--)
		freshtr[index++] = s[start++];
	freshtr[index++] = '\0';
	return (freshtr);
}
