/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 14:42:05 by martiukh          #+#    #+#             */
/*   Updated: 2025/09/29 19:46:20 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*src_ptr;
	unsigned char	*dest_ptr;
	int				counter;

	src_ptr = (unsigned char *)src;
	dest_ptr = (unsigned char *)dest;
	counter = n;
	if (src > dest)
	{
		counter = 0;
		while (n--)
		{
			dest_ptr[counter] = src_ptr[counter];
			counter++;
		}
	}
	else
	{
		while (counter--)
		{
			dest_ptr[counter] = src_ptr[counter];
		}
	}
	return (dest);
}
/*
"123467890"
"34567890"


*/
