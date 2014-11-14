/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:45:46 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/14 11:54:35 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The isdigit() function tests for a decimal digit character.
*/

int ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
