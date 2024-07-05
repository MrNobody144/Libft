/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:41:58 by jianliew          #+#    #+#             */
/*   Updated: 2024/04/26 13:36:13 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*str, int ch)
{
	int	i;

	i = -1;
	if (ch > 256)
		ch -= 256;
	while (str[++i])
	{
		if (str[i] == ch)
			return ((char *)(str + i));
	}
	if (!ch)
		return ((char *)&str[i]);
	return (NULL);
}
