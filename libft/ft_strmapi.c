/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:45:54 by jianliew          #+#    #+#             */
/*   Updated: 2024/04/23 18:19:59 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ch;

	i = 0;
	if (!s || !f)
		return (NULL);
	while (s[i] != '\0')
		i++;
	ch = (char *)malloc(i + 1);
	if (ch == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		ch[i] = (*f)(i, s[i]);
		i++;
	}
	ch[i] = '\0';
	return (ch);
}
