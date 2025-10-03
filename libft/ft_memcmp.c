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

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s11;
	unsigned char *s22;


	s11 = (unsigned char *)(s1);
	s22 = (unsigned char *)(s2);
	while (n)
	{
		if(*s11 != *s22)
        {
            return (*s11 - *s22);
        }
		s11++;
		s22++;
		n--;
	}
	return (0);
}
