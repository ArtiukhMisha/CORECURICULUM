/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 22:04:14 by martiukh          #+#    #+#             */
/*   Updated: 2025/09/29 22:21:49 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	counter;
	char			*res;
	int				len;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	counter = 0;
	res = ft_calloc(1, len + 1);
	if (!res)
	{
		return (0);
	}
	while (len)
	{
		res[counter] = f(counter, *(s + counter));
		counter++;
		len--;
	}
	return (res);
}
