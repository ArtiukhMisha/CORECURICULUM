/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 22:04:14 by martiukh          #+#    #+#             */
/*   Updated: 2025/09/29 22:21:49 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	counter;
	char			*res;

	if (!s)
		return (0);
	counter = ft_strlen((s + start));
	if (len < counter)
	{
		res = ft_calloc(1, len + 1);
	}
	else
	{
		res = ft_calloc(1, counter + 1);
	}
	if (!res)
		return (0);
	counter = 0;
	while (len-- && *(s + start))
	{
		res[counter] = s[start];
		start++;
		counter++;
	}
	return (res);
}
