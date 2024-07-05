/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:52:37 by jianliew          #+#    #+#             */
/*   Updated: 2024/04/17 19:22:52 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*str, int ch, int size)
{
	int	i;

	i = -1;
	if (ch > 256)
		ch -= 256;
	while (++i < size)
	{
		if (((char *)str)[i] == ch)
			return ((void *)(str + i));
	}
	return (NULL);
}
