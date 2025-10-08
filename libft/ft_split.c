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

unsigned int char_count(char const *s, char c);

char **ft_split(char const *s, char c)
{
    char **res;
    char **cpy;
    char *temp;
    unsigned int n;

    temp = (char *)(s);
    n = char_count(s,c);
    res = ft_calloc(1, n * sizeof(char *));
    cpy = res;
    while (n)
    {
        printf("\n%s",temp);
        *cpy = ft_calloc(1,ft_strchr(temp,c)-temp);
        temp = ft_strchr(temp,c);
        n--;
    }
    return (res);
}

unsigned int char_count(char const *s, char c)
{
    unsigned int counter;
    counter = 0;
    while (s)
    {
        if (*s == c)
        {
            counter++;
        }
    }
    return (counter);
}