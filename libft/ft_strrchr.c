/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:48:20 by jianliew          #+#    #+#             */
/*   Updated: 2024/04/17 19:49:18 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*str, int ch)
{
	int	i;
	int	found;

	i = -1;
	found = -1;
	if (ch > 256)
		ch -= 256;
	while (str[++i])
	{
		if (str[i] == ch)
			found = i;
	}
	if (ch == '\0')
		found = i;
	if (found < 0)
		return (NULL);
	return ((char *)(str + found));
}
