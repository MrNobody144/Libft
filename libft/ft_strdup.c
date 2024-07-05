/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:44:35 by jianliew          #+#    #+#             */
/*   Updated: 2024/04/17 19:14:42 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		count;
	int		i;

	count = 0;
	i = -1;
	while (src[count] != '\0')
		count++;
	dest = (char *)malloc(count + 1);
	if (dest == NULL)
		return (NULL);
	while (++i < count)
		dest[i] = src[i];
	dest[count] = '\0';
	return (dest);
}
