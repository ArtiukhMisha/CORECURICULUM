/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:49:17 by martiukh          #+#    #+#             */
/*   Updated: 2025/10/06 17:13:26 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

static char	*find_str(const char *big,	const char *little, size_t len);

char	*ft_strnstr(const char *big,	const char *little, size_t len)
{
	unsigned int	len_little;

	len_little = 0;
	while (*(little + len_little))
		len_little++;
	if (len_little == 0)
	{
		return ((char *)(big));
	}
	if (len < len_little || len <= 0)
	{
		return (0);
	}
	return (find_str(big, little, len));
}

static char	*find_str(const char *big,	const char *little, size_t len)
{
	unsigned int	counter_little;
	char			*mem;
	int				flag;

	while (len && *big)
	{
		if (*(big) == *little)
		{
			mem = (char *)(big);
			flag = 1;
			counter_little = 0;
			while (*(little + counter_little) && (len - counter_little))
			{
				if (*(little + counter_little) != *(big + counter_little))
					flag = 0;
				counter_little++;
			}
			if (*(little + counter_little) == '\0' && flag)
				return (mem);
		}
		big++;
		len--;
	}
	return (0);
}
