/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jianliew <jianliew@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:46:03 by jianliew          #+#    #+#             */
/*   Updated: 2024/04/26 13:36:58 by jianliew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		ls1;
	int		ls2;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	str = (char *)malloc(ls1 + ls2 + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, ls1 + 1);
	ft_strlcat(str, s2, (ls1 + ls2 + 1));
	return (str);
}
