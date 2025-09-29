/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 18:23:54 by martiukh          #+#    #+#             */
/*   Updated: 2025/09/27 18:51:27 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	counter;

	counter = 0;
	while (n)
	{
		*(char *)(dest + counter) = *(char *)src;
		counter++;
		src++;
		n--;
	}
	return (dest);
}
