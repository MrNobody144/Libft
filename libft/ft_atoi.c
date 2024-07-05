/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 12:38:07 by jianliew          #+#    #+#             */
/*   Updated: 2024/04/15 12:23:37 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					n;
	unsigned long int	result;

	i = 0;
	n = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			n *= -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		result = (result * 10) + (str[i] - 48);
		if (str[i + 1] < 48 || str[i + 1] > 57)
			return (result * n);
		i++;
	}
	return (result * n);
}
