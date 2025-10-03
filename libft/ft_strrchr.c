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

char *ft_strrchr(const char *s, int c)
{
    char *res;
    int len;
    len = 0;
    res = (char *)(s);
    while (*(res + len))
    {
        len++;
    }
    while (len)
    {
        if (*(res + len) == c)
        {
            return (res + len);
        }
        len--;
    }
    return(0);
}
