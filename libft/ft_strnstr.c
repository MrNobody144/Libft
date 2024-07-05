/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:17:47 by jianliew          #+#    #+#             */
/*   Updated: 2024/04/25 18:33:59 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	unsigned long	i;
	unsigned long	x;

	i = 0;
	x = 0;
	if (!str && n == 0)
		return (NULL);
	if (*to_find == '\0')
		return ((char *)str);
	while ((str[i] != '\0') && ((i + x) <= n))
	{
		if ((to_find[x] == str[i + x]) && (to_find[x] != '\0'))
			x++;
		else if (to_find[0] == '\0')
			return ((char *)str);
		else if (to_find[x] == '\0')
			return ((char *)&str[i]);
		else
		{
			i++;
			x = 0;
		}
	}
	return (NULL);
}
