/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Pierre <Pierre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 22:51:36 by Pierre            #+#    #+#             */
/*   Updated: 2014/11/03 23:47:48 by Pierre           ###   ########.fr       */
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
	return (dst)
}
