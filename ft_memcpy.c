/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:31:03 by wwang             #+#    #+#             */
/*   Updated: 2021/11/19 11:31:06 by wwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Included libft to be able to use the size_t data type */
#include "libft.h"

/* This function copies src to dst for len amount of bytes
 * it returns the dst string */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
