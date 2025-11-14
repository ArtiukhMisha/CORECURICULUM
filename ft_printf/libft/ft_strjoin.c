/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 20:29:13 by martiukh          #+#    #+#             */
/*   Updated: 2025/10/16 13:14:05 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*res;

	if (!s1 && !s2)
		return (0);
	res = ft_calloc(1, ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!res)
		return (0);
	if (s1)
		ft_strlcpy(res, s1, ft_strlen(s1) + 1);
	if (s2)
		ft_strlcat(res, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (res);
}
