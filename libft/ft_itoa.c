/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:08:20 by jianliew          #+#    #+#             */
/*   Updated: 2024/04/25 22:58:17 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	*cleanup(char	*str, int n)
{
	int		i;
	int		count;
	char	*nstr;

	count = ft_strlen(str);
	nstr = (char *)ft_calloc(count + 1, 1);
	if (n < 0)
	{
		free(nstr);
		nstr = (char *)ft_calloc(count + 2, 1);
	}
	if (!nstr)
		return (NULL);
	i = -1;
	if (n < 0)
		nstr[++i] = '-';
	while (--count >= 0)
		nstr[++i] = str[count];
	free(str);
	return (nstr);
}

char	*ft_itoa(int n)
{
	int		i;
	long	lnb;
	char	*str;

	i = -1;
	lnb = n;
	str = (char *)ft_calloc(11, 1);
	if (!str)
		return (NULL);
	if (lnb < 0)
		lnb *= -1;
	while (lnb >= 10)
	{
		str[++i] = (lnb % 10) + 48;
		lnb /= 10;
	}
	str[++i] = lnb + 48;
	str = cleanup(str, n);
	return (str);
}
