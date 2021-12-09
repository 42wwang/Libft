/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:34:55 by wwang             #+#    #+#             */
/*   Updated: 2021/11/19 11:34:56 by wwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	int	l;

	l = 0;
	if (n < 0)
		l++;
	while (n != 0)
	{
		l++;
		n = n / 10;
	}
	return (l);
}

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		l;

	l = ft_intlen(n);
	str = malloc(sizeof(char) * (l + 1));
	str[l] = '\0';
	if (n < 0)
		str[0] = '-';
	else if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		l--;
		str[l] = ft_abs(n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
