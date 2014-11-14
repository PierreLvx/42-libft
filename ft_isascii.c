/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:49:35 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/14 18:07:10 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The isascii() function tests for an ASCII character,
** which is any character between 0 and octal 0177 inclusive.
** FYI: http://www.cs.umd.edu/class/sum2003/cmsc311/Notes/BitOp/hexoctal.html
*/

int ft_isascii(int c)
{
	return ((c >= 0000 && c <= 0177) ? 1 : 0);
}
