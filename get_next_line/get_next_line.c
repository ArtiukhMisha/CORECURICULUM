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

char	*fill_buffer(int fd, char *line, char *str);

char	*get_next_line(int fd)
{
	char		*str;
	char		*line;

	line = 0;
	str = malloc(BUFFER_SIZE);
	if (!str)
	{
		return (0);
	}
	line = fill_buffer(fd, line, str);

	return (line);
}

char *fill_buffer(int fd, char *line, char *str)
{
	char		*temp;
	int			flag;
	static char *memory;

	flag = 1;
	if (memory)
	{
		temp = ft_strchr(memory, '\n');
		if (temp)
		{
			line = ft_strjoin(line, ft_substr(memory, 0, temp - memory));
			memory = ft_substr(temp, 0, ft_strlen(temp)) + 1;
			return (line);
		}
		line = ft_strjoin(line, ft_substr(memory, 0, temp - memory));
	}
	while (flag && flag != -1)
	{
		flag = read(fd, str, BUFFER_SIZE);
		temp = ft_strchr(str, '\n');
		if (temp)
		{
			memory = ft_substr(temp, 0, ft_strlen(temp)) + 1;
			line = ft_strjoin(line, ft_substr(str, 0, temp - str));
			break ;
		}
		else
			line = ft_strjoin(line, str);
	}
	if (flag == -1)
		return (0);
	return (line);
}

// char *dunno(char *mem)
// {
// 	static char * mem;
// 	if (mem)
// 	{

// 	}
// }
