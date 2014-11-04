/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 13:29:00 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/04 13:29:06 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Deallocates the string memory allocation pointed to by as.
** If as is NULL, no operation is performed.
*/

void	ft_strdel(char **as)
{
	ft_memdel((void **)as);
}
