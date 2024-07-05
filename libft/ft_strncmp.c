/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:17:47 by jianliew          #+#    #+#             */
/*   Updated: 2024/04/17 19:17:41 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*s_1;
	unsigned char	*s_2;

	i = -1;
	s_1 = (unsigned char *)s1;
	s_2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (s1[++i] && i < (n - 1))
	{
		if (s_1[i] > s_2[i] || s_1[i] < s_2[i])
			return (s_1[i] - s_2[i]);
	}
	if (s_1[i] != s_2[i])
		return (s_1[i] - s_2[i]);
	return (0);
}
