/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:33:18 by wwang             #+#    #+#             */
/*   Updated: 2021/11/23 15:23:31 by wwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_locate(char a, char const *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i++] == a)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	s;
	size_t	e;
	char	*substr;

	s = 0;
	while (s1[s] && ft_locate(s1[s], set))
		s++;
	e = ft_strlen(s1);
	while (e > s && ft_locate(s1[e - 1], set))
		e--;
	substr = (char *) malloc(sizeof(*s1) * (e - s + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (s < e)
		substr[i++] = s1[s++];
	substr[i] = '\0';
	return (substr);
}
