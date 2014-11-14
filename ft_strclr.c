/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 10:45:40 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/14 11:54:30 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Clears a string by assigning '\0' to all the characters of parameter string.
*/

void	ft_strclr(char *s)
{
	int	i;

	i = 0;
	if (s)
		while (s[i])
		{
			s[i] = '\0';
			i++;
		}
}
