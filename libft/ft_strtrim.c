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

unsigned int	char_in(char c, char const *s);
const char		*find_start(char const *s1, char const *set);
const char		*find_end(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*start;
	const char	*end;
	char		*res;
	int			counter;

	counter = 0;
	start = find_start(s1, set);
	end = find_end(s1, set);
	res = ft_calloc(1, end - start + 1);
	if (!res)
	{
		return (0);
	}
	while (start < end)
	{
		res[counter] = *(start);
		counter++;
		start++;
	}
	return (res);
}

const char	*find_start(char const *s1, char const *set)
{
	char	*ptr_l;

	ptr_l = (char *)(s1);
	while (1)
	{
		if (char_in(*ptr_l, set))
		{
			ptr_l++;
		}
		else
		{
			break ;
		}
	}
	return (ptr_l);
}

const char	*find_end(char const *s1, char const *set)
{
	char	*ptr_r;

	ptr_r = (char *)(s1 + ft_strlen(s1) - 1);
	if (!set)
	{
		return (0);
	}
	while (1)
	{
		if (char_in(*ptr_r, set))
		{
			ptr_r--;
		}
		else
		{
			break ;
		}
	}
	return (ptr_r + 1);
}

unsigned int	char_in(char c, char const *s)
{
	char	*cpy;

	cpy = (char *)(s);
	while (*cpy)
	{
		if (c == *cpy)
		{
			return (1);
		}
		cpy++;
	}
	return (0);
}
