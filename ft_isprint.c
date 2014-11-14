/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:51:24 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/14 11:54:35 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Tests for any printing character, including space  (` ').
** The value of the argument must be representable as an unsigned char
** or the value of EOF
*/

int ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
