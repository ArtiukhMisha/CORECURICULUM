/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 14:42:05 by martiukh          #+#    #+#             */
/*   Updated: 2025/09/27 20:04:55 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    int	counter;

	counter = n;
    while (counter)
    {
        counter--;

    }

	
	while (n)
	{
		*(char *)(dest + counter) = *(char *)src;
		counter++;
		src++;
		n--;
	}
	return (dest);
}
