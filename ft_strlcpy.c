/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:33:06 by wwang             #+#    #+#             */
/*   Updated: 2021/11/19 11:33:07 by wwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Inlcude libft to use the size_t data type and 
 * ft_strlen and ft_memcpy functions */
#include "libft.h"

/* this function uses ft_strlen to find out the length of 
 * the src pointer, compares it to the size arameters, copy the src to dst */
size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;

	i = 0;
	if (src == NULL || dst == NULL)
		return (0);
	if (dsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < dsize - 1)
	{
		dst[i] = src [i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
