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

char	*func(int fd, char *str);

char	*get_next_line(int fd)
{
	char	*str;
	char	*res;

	str = malloc(BUFFER_SIZE + 1);
	if (!str)
		return (0);
	res = func(fd, str);
	free(str);
	if (!res)
		return (0);
	return (res);
}

char	*func(int fd, char *str)
{
	static char	*mem;
	char		*temp;
	char		*temp1;
	int			bread;

	bread = 1;
	while (bread && bread != -1 && !ft_strchr(str, '\n'))
	{
		bread = read(fd, str, BUFFER_SIZE);
		str[bread] = '\0';
		temp = mem;
		mem = ft_strjoin(temp, str);
		free (temp);
	}
	if (!ft_strlen(mem))
	{
		free(mem);
		mem = 0;
		return (0);
	}
	temp = ft_substr(mem, 0, ft_strchr(mem, '\n') - mem + 1);
	temp1 = mem;
	mem = ft_strjoin(0, ft_strchr(mem, '\n') + 1);
	free(temp1);
	return (temp);
}
