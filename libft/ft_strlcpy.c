/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 15:29:15 by jianliew          #+#    #+#             */
/*   Updated: 2024/04/17 19:16:41 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_src;

	i = -1;
	size_src = ft_strlen(src);
	if (size == 0 || size_src == 0)
	{
		if (size_src == 0)
			dest[0] = '\0';
		return (size_src);
	}
	while (++i < (size - 1))
	{
		if (i < size_src)
			dest[i] = src [i];
		else
		{
			dest[i] = '\0';
			return (size_src);
		}
	}
	dest[i] = '\0';
	return (size_src);
}
