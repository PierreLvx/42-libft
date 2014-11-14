/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 21:30:32 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/14 17:53:35 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	st_intlen(int value)
{
	int		len;

	len = 0;
	if (value < 0)
		len++;
	while (value)
	{
		len++;
		value /= 10;
	}
	return (len);
}

static char	*st_intmax(void)
{
	char	*buf;
	int		max;

	max = -2147483648;
	buf = ft_strnew(st_intlen(max) + 1);
	ft_strcpy(buf, "-2147483648");
	return (buf);
}

char		*ft_itoa(int n)
{
	char	*buf;
	int		j;

	if (n == -2147483648)
		return (st_intmax());
	buf = ft_strnew(st_intlen(n) + 1);
	j = st_intlen(n) - 1;
	if (buf)
	{
		if (n < 0)
		{
			buf[0] = '-';
			n *= -1;
		}
		if (n == 0)
			*buf = '0';
		while (n > 0)
		{
			buf[j] = '0' + (n % 10);
			n /= 10;
			j--;
		}
	}
	return (buf);
}
