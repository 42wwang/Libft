/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:31:33 by wwang             #+#    #+#             */
/*   Updated: 2021/11/19 11:31:37 by wwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Include libft to use size_t data type */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[j] != '\0' && j < dsize)
		j++;
	while (src[i] && (i + j + 1) < dsize)
	{
		dst[i + j] = src[i];
		i++;
	}
	if (j < dsize)
		dst[i + j] = '\0';
	return (j + ft_strlen(src));
}
