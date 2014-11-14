/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:42:39 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/14 18:08:59 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The isalnum() function tests for any character for which isalpha() or
** isdigit() is true.  The value of the argument must be representable as an
** unsigned char or the value of EOF.
*/

int ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
