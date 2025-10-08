/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:29:13 by martiukh          #+#    #+#             */
/*   Updated: 2025/07/17 17:37:18 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	size;
	unsigned int	counter;
	char			*res;

	counter = 0;
	size = ft_strlen(s1);
	size += ft_strlen(s2);
	res = ft_calloc(1, size + 1);
	if (!res)
	{
		return (0);
	}
	while (*s1)
	{
		res[counter] = *s1;
		s1++;
		counter++;
	}
	while (*s2)
	{
		res[counter] = *s2;
		s2++;
		counter++;
	}
	return (res);
}
