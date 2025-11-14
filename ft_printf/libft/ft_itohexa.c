/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 12:37:27 by martiukh          #+#    #+#             */
/*   Updated: 2025/09/29 22:46:41 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// static unsigned int	get_int_len(unsigned int n);

char	*ft_itohexa(unsigned long long int n)
{
	char			*lib;
	char			*revert;
	char			*res;
	unsigned int	index;
	unsigned int	i1;
	unsigned int	i2;

	i1 = 0;
	i2 = 0;
	lib = "0123456789abcdef";
	revert = malloc(11);
	if (!revert)
		return (0);
	while (n)
	{
		index = n % 16;
		revert[i1] = lib[index];
		n = n / 16;
		i1++;
	}
	res = malloc(i1 + 1);
	if (!res)
		return (0);
	while (i1--)
		res[i2++] = revert[i1];
	free(revert);
	return (res);
}

