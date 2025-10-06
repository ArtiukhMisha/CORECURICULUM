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

char *ft_itoa(int n)
{
	char *res;
    int len;
    int cpy;
	
    cpy = n;
    len = 0;
    while(cpy)
	{
		len++;
		cpy = cpy/10;
	}
	if (n>0)
	{
		len--;
		cpy = 1;
	}
	else
	{
		cpy = -1;
	}
	res = malloc(len);
	if (!res)
	{
		return (0);
	}
	while (n)
	{
		res[len] = n%10*cpy + '0';
		n = n/10;
		len--;
	}
	if (cpy == -1)
	{
		res[0] = '-';
	}
	return (res);
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
