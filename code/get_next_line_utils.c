/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 20:00:28 by martiukh          #+#    #+#             */
/*   Updated: 2025/09/29 22:28:21 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	counter;

	if (!str)
		return (0);
	counter = 0;
	while (*(str + counter))
		counter++;
	return (counter);
}

char	*ft_strchr(const char *s, int c)
{
	unsigned char	c1;
	unsigned int	len;
	char			*res;

	if (!s)
		return (0);
	c1 = (char)(c);
	res = (char *)(s);
	len = ft_strlen(res);
	if (c == 0)
		return (res + len);
	len = 0;
	while (*(res + len))
	{
		if (*(res + len) == c1)
			return (res + len);
		len++;
	}
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*res;

	if (!s1 && !s2)
		return (0);
	res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!res)
		return (0);
	if (s1)
		ft_strlcpy(res, s1, ft_strlen(s1) + 1);
	if (s2)
		ft_strlcpy(res + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (res);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	counter;

	counter = 0;
	len = 0;
	while (*(src + len))
	{
		len++;
	}
	if (size == 0)
	{
		return (len);
	}
	while (counter < size - 1 && *(src + counter))
	{
		*(dst + counter) = *(src + counter);
		counter++;
	}
	*(dst + counter) = '\0';
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	counter;
	char			*res;

	if (!s)
		return (0);
	counter = ft_strlen((s + start));
	if (len < counter)
	{
		res = malloc(len + 1);
	}
	else
	{
		res = malloc(counter + 1);
	}
	if (!res)
		return (0);
	counter = 0;
	while (len-- && *(s + start))
	{
		res[counter] = s[start];
		start++;
		counter++;
	}
	res[counter] = 0;
	return (res);
}
