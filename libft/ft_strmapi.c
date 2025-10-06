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


char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *res;
    unsigned int counter;

    counter = 0;
    res = (char *)(s);
    while (*res)
    {
        res[counter] = f(counter,*(res + counter));
        counter++;
    }

    return (res);
}
