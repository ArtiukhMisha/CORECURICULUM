/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:57:52 by martiukh          #+#    #+#             */
/*   Updated: 2025/10/06 16:42:59 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	if (size == 0 || nmemb == 0)
	{
		return (malloc(0));
	}
	if (size > SIZE_MAX / nmemb)
	{
		return (0);
	}
	res = malloc(nmemb * size);
	if (!res)
	{
		return (0);
	}
	ft_memset(res, 0, size * nmemb);
	return (res);
}
