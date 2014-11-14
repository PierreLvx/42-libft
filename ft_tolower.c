/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:01:49 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/14 18:13:14 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Converts an upper-case letter to the corresponding lower-case letter.
** The argument must be representable as an unsigned char or the value of EOF.
*/

int ft_tolower(int c)
{
	return ((c >= 65 && c <= 90) ? c + 32 : c);
}
