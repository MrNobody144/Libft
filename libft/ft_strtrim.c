/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:49:56 by jianliew          #+#    #+#             */
/*   Updated: 2024/04/25 16:51:37 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

static char	*if_output(const char *s1, int start, int end, int i)
{
	char	*trim;

	if (i == ft_strlen(s1))
	{
		trim = (char *)malloc(1);
		trim[0] = '\0';
		return (trim);
	}
	if (start < 0)
		start = 0;
	if (end < 0)
		end = ft_strlen(s1) - 1;
	trim = (char *)ft_calloc((end - start) + 2, 1);
	if (!trim)
		return (NULL);
	i = -1;
	while ((++start - 1) <= end)
		trim[++i] = s1[start - 1];
	return (trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*trim;

	i = -1;
	start = -1;
	end = -1;
	if (!s1)
		return (NULL);
	while (s1[++i] && (start < 0 || end < 0))
	{
		if (!ft_strchr(set, s1[i]) && (start < 0))
			start = i;
		if (!ft_strchr(set, s1[ft_strlen(s1) - i - 1]) && (end < 0))
			end = ft_strlen(s1) - i - 1;
	}
	trim = if_output(s1, start, end, i);
	return (trim);
}
