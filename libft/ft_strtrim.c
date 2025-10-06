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

const char *find_start(char const *s1, char const *set);
const char *find_end(char const *s1, char const *set);

char *ft_strtrim(char const *s1, char const *set)
{
    char *res;
    const char *start;
    const char *end;
    int counter;

    counter = 0;
    start = find_start(s1,set);
    end = find_end(s1,set);
    
    res = ft_calloc(1,end - start);
    if (!res) 
    {
        return(0);
    }
    while(start < end)
    {
        res[counter] = *(start);
        counter++;
        start++;
    }
    return (res);
}

const char *find_start(char const *s1, char const *set)
{
    int len_set;
    int counter_l;

    counter_l = 0;
    len_set = ft_strlen(set);
    while(len_set)
    {
        if (ft_strncmp(s1 + (counter_l * len_set),set,len_set) == 0)
        {
            counter_l++;
        }else{
            break;
        }
    }
    return (s1+counter_l*len_set);
}

const char *find_end(char const *s1, char const *set)
{
    int len_set;
    int len_s1;
    int counter_r;

    counter_r = 0;
    len_set = ft_strlen(set);
    len_s1 = ft_strlen(s1);
    while(len_s1 && len_set )
    {
        if (ft_strncmp(s1 + len_s1 - len_set - (counter_r * len_set),set,len_set) == 0)
        {
            counter_r++;
        }
        else{
            break;
        }
    }
    return (s1+len_s1 - counter_r*len_set);
}

