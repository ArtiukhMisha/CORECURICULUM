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

static unsigned int	get_int_len(unsigned int n);

char	*ft_utoa(unsigned int n)
{
	char			*res;
	unsigned int	len;

	len = get_int_len(n);
	res = ft_calloc(1, len + 1);
	if (!res)
		return (0);
	while (1)
	{
		res[len--] = n % 10 + '0';
		n = n / 10;
		if (!n)
			break ;
	}
	return (res);
}

static unsigned int	get_int_len(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
	{
		return (0);
	}
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len - 1);
}
