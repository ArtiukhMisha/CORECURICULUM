/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:57:52 by martiukh          #+#    #+#             */
/*   Updated: 2025/10/06 17:01:10 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		len;

	len = 0;
	while (src[len])
	{
		len++;
	}
	dest = ft_calloc(1, len + 1);
	if (!dest)
	{
		return (0);
	}
	len = 0;
	while (src[len])
	{
		dest[len] = src[len];
		len++;
	}
	return (dest);
}
