/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 14:42:05 by martiukh          #+#    #+#             */
/*   Updated: 2025/09/27 18:15:33 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	void	*cpy;

	cpy = s;
	while (n)
	{
		*(int *)cpy = c;
		cpy++;
		n--;
	}
	return (s);
}
