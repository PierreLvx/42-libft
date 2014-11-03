/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Pierre <Pierre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 23:01:06 by Pierre            #+#    #+#             */
/*   Updated: 2014/11/03 23:16:42 by Pierre           ###   ########.fr       */
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
