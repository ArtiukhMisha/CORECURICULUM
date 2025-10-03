/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:57:52 by martiukh          #+#    #+#             */
/*   Updated: 2025/07/16 19:05:08 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	void *res;
	unsigned char *cpy;

    res = malloc(nmemb * size);
    if (!res)
    {
        return(0);
    }
    cpy = (unsigned char * )res;
    while (nmemb)
    {
        cpy[nmemb] = 0;
        nmemb--;
    }
    return (res);
}
