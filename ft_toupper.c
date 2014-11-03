/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 12:02:51 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/03 12:04:49 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Converts a lower-case letter to the corresponding upper-case letter.
** The argument must be representable as an unsigned char or the value of EOF.
*/

int ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}
