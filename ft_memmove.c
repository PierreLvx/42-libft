/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 10:08:02 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/06 10:08:05 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, void *src, size_t len)
{	
	char		*str_1;
	char		*str_2;
	size_t		i;

	i = 0;
	str_1 = dst;
	str_2 = src;
	while (i < len && str_1[i] != '\0')
	{
		str_1[i] = str_2[i];
		i++;
	}
	return (dst);
}
