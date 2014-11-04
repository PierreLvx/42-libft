/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:28:39 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/04 13:28:45 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Deallocates the memory allocation pointed to by ap.
** If ap is a NULL pointer, no operation is performed.
*/

void	ft_memdel(void **ap)
{
	if (*ap != NULL)
	{
		free(*ap);
		*ap = NULL;
	}
}
