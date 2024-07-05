/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:02:53 by jianliew          #+#    #+#             */
/*   Updated: 2024/04/13 16:15:07 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*ptr, int ch, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		((char *)ptr)[i] = ch;
	return (ptr);
}
