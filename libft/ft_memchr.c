/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 14:42:05 by martiukh          #+#    #+#             */
/*   Updated: 2025/10/06 16:41:15 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cpy;
	unsigned char	c1;

	c1 = (unsigned char)(c);
	cpy = (unsigned char *)(s);
	while (n)
	{
		if (*cpy == c1)
		{
			return (cpy);
		}
		cpy++;
		n--;
	}
	return (0);
}
