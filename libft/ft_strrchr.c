/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:49:17 by martiukh          #+#    #+#             */
/*   Updated: 2025/10/06 16:53:26 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*res;
	char	c1;
	int		len;

	c1 = (char)(c);
	len = 0;
	res = (char *)(s);
	while (*(res + len))
	{
		len++;
	}
	if (c == 0)
	{
		return (res + len);
	}
	while (len--)
	{
		if (*(res + len) == c1)
		{
			return (res + len);
		}
	}
	return (0);
}
