/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:29:47 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/04 13:29:54 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies the string src to dst (including the terminating `\0' character).
*/

char *strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
