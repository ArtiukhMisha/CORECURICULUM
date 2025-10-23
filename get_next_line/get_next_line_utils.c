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
static size_t	ft_strlcpy(char *dst, const char *src, size_t size);
static size_t	ft_strlcat(char *dst, const char *src, size_t size);

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

	c1 = (char)(c);
	res = (char *)(s);
	len = 0;
	while (*(res + len))
	{
		len++;
	}
	if (c == 0)
	{
		return (res + len);
	}
	while (len)
	{
		if (*res == c1)
		{
			return (res);
		}
		res++;
		len--;
	}
	return (0);
}

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		len;

	len = 0;
	while (src[len])
	{
		len++;
	}
	dest = malloc(len + 1);
	if (!dest)
	{
		return (0);
	}
	len = 0;
	while (src[len])
	{
		dest[len] = src[len];
		len++;
	}
	return (dest);
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
		ft_strlcat(res, s2, ft_strlen(s2) + 1);
	return (res);
}
static size_t	ft_strlcpy(char *dst, const char *src, size_t size)
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
static size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	lensrc;

	len = ft_strlen(dst);
	lensrc = 0;
	if (size < len || size == 0)
	{
		lensrc = ft_strlen(src);
		return (lensrc + size);
	}
	while (*(src + lensrc) && (size - 1 > len))
	{
		*(dst + len) = *(src + lensrc);
		lensrc++;
		dst++;
		size--;
	}
	while (*(src + lensrc))
		lensrc++;
	*(dst + len) = '\0';
	return (len + lensrc);
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
	return (res);
}
