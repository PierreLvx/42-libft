/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:51:24 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/15 16:46:19 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Tests for any printing character, including space  (` ').
** The value of the argument must be representable as an unsigned char
** or the value of EOF
*/

int ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
