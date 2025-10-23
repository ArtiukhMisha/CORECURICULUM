/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:49:17 by martiukh          #+#    #+#             */
/*   Updated: 2025/10/06 16:46:12 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
