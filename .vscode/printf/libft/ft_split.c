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

unsigned int	word_count(char const *s, char c);
char			*ft_not_strchr(const char *s, int c);
void			clear(char **arr);
int				split_words(char **res, int numb, char const *s, char c);

char	**ft_split(char const *s, char c)
{
	unsigned int	numb;
	char			**res;

	if (!s)
		return (NULL);
	numb = word_count(s, c);
	if (numb == 0)
		return (ft_calloc(1, sizeof(char *)));
	res = ft_calloc(numb + 1, sizeof (char *));
	if (!res)
	{
		return (0);
	}
	if (!split_words(res, numb, s, c))
		return (0);
	return (res);
}

static int	split_words(char **res, int numb, char const *s, char c)
{
	char			**cpy;
	char			*temp;
	int				len;

	temp = (char *)s;
	cpy = res;
	while (numb--)
	{
		temp = ft_not_strchr(temp, c);
		if (ft_strchr(temp, c))
			len = ft_strchr(temp, c) - temp;
		else
			len = ft_strlen(temp);
		*cpy = ft_calloc(1, (len + 1));
		if (!*cpy)
		{
			clear(res);
			return (0);
		}
		ft_strlcpy(*cpy, temp, len + 1);
		temp = temp + len + 1;
		cpy++;
	}
	return (1);
}

void	clear(char **arr)
{
	int	counter;

	counter = 0;
	while (arr[counter])
	{
		free(arr[counter]);
		counter++;
	}
	free(arr);
}

char	*ft_not_strchr(const char *s, int c)
{
	unsigned char	c1;
	unsigned int	len;
	char			*res;

	c1 = (char)(c);
	res = (char *)(s);
	len = ft_strlen(res);
	while (*(res + len))
		len++;
	while (len)
	{
		if (*res != c1)
		{
			return (res);
		}
		res++;
		len--;
	}
	return (0);
}

static unsigned int	word_count(char const *s, char c)
{
	unsigned int	counter;
	int				flag;

	flag = 0;
	counter = 0;
	while (*s)
	{
		if (*s == c)
		{
			if (flag)
			{
				flag = 0;
				counter++;
			}
		}
		else
		{
			flag = 1;
		}
		s++;
	}
	counter += flag;
	return (counter);
}
