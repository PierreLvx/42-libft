/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:38:41 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/05 14:05:56 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The strstr() function locates the first occurrence of
** the null-terminated string s2 in the null-terminated string s1.
** If s2 is an empty string, s1 is returned; if s2 occurs nowhere in s1,
** NULL is returned; otherwise a pointer to the first character
** of the first occurrence of s2 is returned.
*/

char *ft_strstr(const char *s1, const char *s2)
{
	int i;
	int pos;
	int len;

	i = 0;
	pos = 0;
	len = 0;
	while (s2[len] != '\0')
		len++;
	if (len == 0)
		return (s1);
	while (s1[i])
	{
		while (s2[pos] == s1[i + pos])
		{
			if (pos == len - 1)
				return (s1 + i);
			pos++;
		}
		pos = 0;
		i++;
	}
	return (0);
}
