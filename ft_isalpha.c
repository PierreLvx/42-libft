/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:44:48 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/14 18:13:38 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The isalpha() function tests for any character for which isupper() or
** islower() is true.  The value of the argument must be representable as an
** unsigned char or the value of EOF.
*/

int ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}
