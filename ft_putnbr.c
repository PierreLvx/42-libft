/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:49:49 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/03 15:54:51 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Prints the integer number n to standard output.
*/

void ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar ('-');
		n *= -1;
	}
	if (n < 10)
		ft_putchar (n + 48);
	else if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr (n % 10);
	}
}
