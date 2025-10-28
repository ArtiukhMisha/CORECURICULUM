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

char	*get_next_line(int fd)
{
	static char *mem;
	char *str;
	char *line;
	char *temp;
	char *temp1;
	int bread;

	line = 0;
	bread = 1;
	str = malloc(BUFFER_SIZE + 1);
	if (!str)
		return (0);
	printf ("\n mem - [%s]", mem);
	if (mem)
	{
		if (ft_strchr(mem,'\n'))
		{
			temp = ft_substr(mem, 0, ft_strchr(mem,'\n') - mem + 1);
			line = ft_strjoin(line,temp);
			free(temp);
			temp = mem;
			mem = ft_substr(mem, ft_strchr(mem,'\n') - mem + 1, BUFFER_SIZE);
			free(temp);
			free(str);
			return (line);
		}
		else
		{
			temp = line;
			line = ft_strjoin(line,mem);
			free(temp);
		}
	}
	while (bread && bread != -1)
	{
		bread = read(fd,str,BUFFER_SIZE);
		str[bread] = '\0';
		if (ft_strchr(str, '\n'))
		{
			temp = line;
			temp1 = mem;
			line = ft_strjoin(line, temp1);
			mem = ft_substr(str, ft_strchr(str, '\n') - str + 1, BUFFER_SIZE);

			free(temp);
			free(temp1);
			break ;
		}
		else
		{
			temp = line;
			line = ft_strjoin(line, str);
			free(temp);
		}
	}
	if (bread == -1)
	{
		return (0);
	}
	free(str);

	return (line);
}
