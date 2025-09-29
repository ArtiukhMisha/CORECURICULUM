/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:29:13 by martiukh          #+#    #+#             */
/*   Updated: 2025/07/17 17:37:18 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_strcpy(char *dest, char *src);
char	*ft_realloc(char *src, int size);
char	*ft_strcat(char *dest, char *src);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		len;

	if (size == 0)
	{
		return (0);
	}
	res = malloc(1);
	if (!res)
	{
		return (0);
	}
	while (size)
	{
		len = 0;
		while (strs[len])
			len++;
		res = ft_realloc(res, len + 2);
		res = ft_strcat(res, *strs);
		if (size != 1)
			res = ft_strcat(res, sep);
		strs++;
		size--;
	}
	return (res);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (*src)
	{
		*(dest + counter) = *src;
		src++;
		counter++;
	}
	*(dest + counter) = '\0';
	return (dest);
}

char	*ft_realloc(char *src, int size)
{
	char	*res;
	int		len;

	len = 0;
	while (src[len])
	{
		len++;
	}
	res = malloc(sizeof(char) * (len + size + 2));
	if (!res)
	{
		return (0);
	}
	ft_strcpy(res, src);
	return (res);
}

char	*ft_strcat(char *dest, char *src)
{
	int	len;

	len = 0;
	while (*(dest + len))
	{
		len++;
	}
	while (*src)
	{
		*(dest + len) = *src;
		src++;
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
