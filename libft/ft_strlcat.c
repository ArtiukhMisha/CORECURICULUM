/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:49:17 by martiukh          #+#    #+#             */
/*   Updated: 2025/10/06 17:51:27 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	lensrc;

	len = ft_strlen(dst);
	lensrc = 0;
	if (size < len || size == 0)
	{
		lensrc = ft_strlen(src);
		return (lensrc + size);
	}
	while (*(src + lensrc) && (size - 1 > len))
	{
		*(dst + len) = *(src + lensrc);
		lensrc++;
		dst++;
		size--;
	}
	while (*(src + lensrc))
		lensrc++;
	*(dst + len) = '\0';
	return (len + lensrc);
}
