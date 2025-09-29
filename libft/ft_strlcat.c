/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:49:17 by martiukh          #+#    #+#             */
/*   Updated: 2025/09/29 21:52:57 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	lensrc;

	len = 0;
	lensrc = 0;
	while (*(dst + len))
		len++;
	if (size - len == 0)
	{
		while (*(src + lensrc))
			lensrc++;
		return (len + lensrc);
	}
	while (*(src + lensrc) && (size - len - 1))
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
