/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:56:54 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/03 14:37:56 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*
** Discards any whitespace characters until first non-whitespace character is
** found. Then takes as many characters as possible to form a valid integer
** number representation and converts them to integer value.
*/

int	ft_atoi(const char *str)
{
	int	value;
	int	sign;

	value = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t'
			|| *str == '\n' || *str == '\r'
			|| *str == '\v' || *str == '\f')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (str[0] >= 48 && str[0] <= 57)
	{
		value = (value * 10) + (str[0] - '0');
		str++;
	}
	return (value * sign);
}

int	main(void)
{
	printf("%i\n", atoi(" -123junk"));
	printf("%i\n", ft_atoi(" -123junk"));
	return (0);
}
