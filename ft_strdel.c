/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Pierre <Pierre@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 23:09:43 by Pierre            #+#    #+#             */
/*   Updated: 2014/11/03 23:16:59 by Pierre           ###   ########.fr       */
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
