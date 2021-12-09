/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:32:30 by wwang             #+#    #+#             */
/*   Updated: 2021/11/19 17:29:03 by wwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Include libft to be able to use the size_t data type */
#include "libft.h"

/* This function copies len bytes from src to dst
 * and returns dst */
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*ndst;
	unsigned char	*nsrc;

	ndst = (unsigned char *)dst;
	nsrc = (unsigned char *)src;
	if (!dst && !src)
		return (dst);
	if (src < dst)
		while (n--)
			ndst[n] = nsrc[n];
	else
		while (n--)
			*ndst++ = *nsrc++;
	return (dst);
}
