/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 15:16:17 by jianliew          #+#    #+#             */
/*   Updated: 2024/04/23 19:30:13 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*to, const void	*from, size_t size)
{
	unsigned int	i;

	i = -1;
	if (!to && !from)
		return (0);
	if (from > to)
	{
		while (++i < size)
			((char *)to)[i] = ((char *)from)[i];
	}
	else
	{
		while (size-- > 0)
			((char *)to)[size] = ((char *)from)[size];
	}
	return (to);
}
