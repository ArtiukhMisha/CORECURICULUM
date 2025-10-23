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

static unsigned int	get_int_len(int n);

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		sign;

	len = get_int_len(n);
	sign = 1;
	if (n < 0)
		sign = -1;
	res = ft_calloc(1, len + 2);
	if (!res)
		return (0);
	while (1)
	{
		res[len] = n % 10 * sign + '0';
		n = n / 10;
		len--;
		if (!n)
			break ;
	}
	if (sign == -1)
	{
		res[0] = '-';
	}
	return (res);
}

static unsigned int	get_int_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		len++;
	}
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len - 1);
}
/*int main()
{
	int res;
	char *str;
	str = "   \n--+--+021s234ab567";
	res = ft_atoi(str);
	printf("%d",res);
	return (0);*
}*/
