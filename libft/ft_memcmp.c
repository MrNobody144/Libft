/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:56:39 by jianliew          #+#    #+#             */
/*   Updated: 2024/04/17 19:10:34 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void	*str, const void	*str2, int size)
{
	int	i;

	i = -1;
	while (++i < size)
	{
		if (((unsigned char *)str)[i] != ((unsigned char *)str2)[i])
			return (((unsigned char *)str)[i] - ((unsigned char *)str2)[i]);
	}
	return (0);
}
