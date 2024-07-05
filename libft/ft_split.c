/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:04:14 by jianliew          #+#    #+#             */
/*   Updated: 2024/04/26 18:19:14 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	while (*str)
	{
		if (*str != c && flag == 0)
		{
			flag = 1;
			i++;
		}
		else if (*str == c)
			flag = 0;
		str++;
	}
	return (i);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i[2];
	int		index;
	char	**split;

	if (!s)
		return (0);
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	i[0] = -1;
	i[1] = 0;
	index = -1;
	while (++i[0] <= (size_t)ft_strlen(s))
	{
		if (s[i[0]] != c && index < 0)
			index = i[0];
		else if ((s[i[0]] == c || i[0] == (size_t)ft_strlen(s)) && index >= 0)
		{
			split[i[1]++] = word_dup(s, index, i[0]);
			index = -1;
		}
	}
	split[i[1]] = 0;
	return (split);
}
