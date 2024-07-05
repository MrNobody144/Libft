/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:17:47 by jianliew          #+#    #+#             */
/*   Updated: 2024/04/26 13:37:10 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	dest_cnt;
	unsigned int	src_cnt;

	i = -1;
	if ((!dest || !src) && size == 0)
		return (0);
	dest_cnt = ft_strlen(dest);
	src_cnt = ft_strlen(src);
	if (size <= dest_cnt)
		return (src_cnt + size);
	while (src[++i] && (i < (size - dest_cnt - 1)))
		dest[dest_cnt + i] = src[i];
	dest[dest_cnt + i] = '\0';
	return (src_cnt + dest_cnt);
}
