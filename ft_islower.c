/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:47:15 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/14 11:54:35 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The islower() function tests for any lower-case letters.  The value of the
** argument must be representable as an unsigned char or the value of EOF.
*/

int ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
