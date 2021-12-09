/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:34:29 by wwang             #+#    #+#             */
/*   Updated: 2021/11/23 11:21:37 by wwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t l)
{
	size_t	i;
	size_t	j;
	char	*nstr;

	nstr = (char *)malloc(sizeof(*s) * (l + 1));
	i = 0;
	j = 0;
	if (!nstr)
		return (NULL);
	while (s[j])
	{
		if (j >= start && i < l)
		{
			nstr[i] = s[j];
			i++;
		}
		j++;
	}
	nstr[i] = '\0';
	return (nstr);
}
