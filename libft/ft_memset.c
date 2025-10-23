/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 14:42:05 by martiukh          #+#    #+#             */
/*   Updated: 2025/10/06 13:35:01 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	void	*cpy;

	cpy = s;
	while (n)
	{
		*(unsigned char *)s = c;
		s++;
		n--;
	}
	return (cpy);
}
