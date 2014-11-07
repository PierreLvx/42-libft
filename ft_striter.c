/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 10:55:46 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/05 11:00:15 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the function f to each character of the parameter string.
** Each character is passed by address to the function.
*/

void	ft_striter(char *s, void (*f)(char *))
{
	if (s && *s && f && *f)
		while (*s)
			f(s++);
}
