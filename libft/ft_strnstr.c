/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:49:17 by martiukh          #+#    #+#             */
/*   Updated: 2025/07/03 11:15:48 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

char*	ft_strnstr(const char *big,	const char *little, size_t len)
{
    unsigned int len_little;
    unsigned int counter_little;
    int flag;
    char *mem;
    flag = 1;

    mem = (char *)(big);

    len_little = 0;
    while (*(len_little + little))
        len_little++;
    if (len_little == 0)
    {
        return(mem);
    }
    if(len < len_little)
    {
        return (0);
    }

    while(len)
    {
        if(*(big) == *little)
        {
            mem = (char *)(big);
            flag = 1;
            counter_little = 0;
            while (*(little + counter_little))
            {
                if(*(little + counter_little) != *(big + counter_little))
                {
                    flag = 0;
                    break;
                }
                counter_little++;
            }
            if (*(little + counter_little) =='\0' && flag)
            {
                return (mem);
            }
        }
        big++;
        len--;
    }

    return (0);
}
