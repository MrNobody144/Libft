/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:08:20 by jianliew          #+#    #+#             */
/*   Updated: 2024/04/14 18:06:19 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	int		result;
	long	lnb;

	lnb = nb;
	if (lnb < 0)
	{
		write(fd, "-", 1);
		lnb *= -1;
	}
	if (lnb >= 0 && lnb < 10)
	{
		result = lnb + 48;
		write(fd, &result, 1);
	}
	else
	{
		ft_putnbr_fd(lnb / 10, fd);
		result = (lnb % 10) + 48;
		write(fd, &result, 1);
	}
}
