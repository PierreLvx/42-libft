/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:14:14 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/04 16:21:58 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Appends a copy of the null-terminated string s2 to the end of the
** null-terminated string s1, then add a terminating '\0'.
** The string s1 must have sufficient space to hold the result.
*/

char *strcat(char *s1, char *s2)
{
	int len;
	int i;

	len = ft_strlen(s1);
	i = 0;
	while (s2[i] != '\0')
	{
		s1[len + i] = s2[i];
		i++;
	}
	s1[len + i] = '\0';
	return (s1);
}
