/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 10:45:40 by plavaux           #+#    #+#             */
/*   Updated: 2015/01/12 22:38:58 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Clears a string by assigning '\0' to all the characters of parameter string.
*/

void	ft_strclr(char *s)
{
	if (s)
		while (*s)
		{
			*s = '\0';
			s++;
		}
}
