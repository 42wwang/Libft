/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:36:10 by wwang             #+#    #+#             */
/*   Updated: 2021/11/19 11:36:12 by wwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	dst;
	unsigned char	*src;

	i = 0;
	dst = (unsigned char)c;
	src = (unsigned char *)s;
	while (i < n)
	{
		if (src[i] == dst)
			return ((void *)(src + i));
		i++;
	}
	return (NULL);
}		
