/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:49:17 by martiukh          #+#    #+#             */
/*   Updated: 2025/10/06 17:25:45 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*cpy_s1;
	unsigned char	*cpy_s2;
	size_t			len;

	cpy_s1 = (unsigned char *)(s1);
	cpy_s2 = (unsigned char *)(s2);
	len = ft_strlen(s1);
	if (!n)
		return (0);
	while (n-- && len--)
	{
		if (*cpy_s1 != *cpy_s2)
		{
			return (*cpy_s1 - *cpy_s2);
		}
		cpy_s1++;
		cpy_s2++;
	}
	if ((*cpy_s2) && !(*cpy_s1))
	{
		return (0 - *cpy_s2);
	}
	return (0);
}
