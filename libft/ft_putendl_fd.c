/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 15:13:58 by jianliew          #+#    #+#             */
/*   Updated: 2024/04/23 18:18:49 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	count;

	count = 0;
	if (s && fd != 0)
	{
		while (s[count] != '\0')
			count++;
		write(fd, s, count);
		write(fd, "\n", 1);
	}
}
