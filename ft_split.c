/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 11:32:40 by wwang             #+#    #+#             */
/*   Updated: 2021/11/19 12:29:11 by wwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_len(const char *s, char c)
{
	size_t	l;

	l = 0;
	while (s[l] != c && s[l] != '\0')
		l++;
	return (l);
}

static size_t	a_count(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static void	*word_free(char **array, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (NULL);
}

static char	**word_sep(char const *s, char c, size_t num, char **array)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = -1;
	while (++i < num)
	{
		while (*s == c)
			s++;
		l = word_len(s, c);
		array[i] = (char *)malloc(sizeof(char) * (l + 1));
		if (!array[i])
			return (word_free(array, i));
		j = 0;
		while (j < l)
			array[i][j++] = *s++;
		array[i][j] = '\0';
	}
	array[i] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	num;

	if (!s)
		return (NULL);
	num = a_count(s, c);
	array = (char **)malloc(sizeof(char *) * (num + 1));
	if (!array)
		return (NULL);
	array = word_sep(s, c, num, array);
	return (array);
}
