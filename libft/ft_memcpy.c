/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:01:33 by jianliew          #+#    #+#             */
/*   Updated: 2024/04/23 19:56:38 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*to, const void *from, size_t size)
{
	unsigned int	i;
	unsigned char	*dest;
	unsigned char	*src;

	i = -1;
	dest = (unsigned char *)to;
	src = (unsigned char *)from;
	if (!to && !from)
		return (0);
	while (++i < size)
		*((char *)dest + i) = *((char *)src + i);
	return (dest);
}
