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

char *set_line(char *src, char *dest);

char	*get_next_line(int fd)
{
	char *str;
	char *line;
	char *temp;
	static char *memory;
	// int len;
	int flag;

	flag = 1;
	// len = 0;
	line = 0;
	str  = malloc(BUFFER_SIZE);
	if (memory)
	{
		printf("\n2nd call");
	}
	while (flag && flag != -1)
	{
		flag = read(fd,str,BUFFER_SIZE);
		temp = ft_strchr(str,'\n');
		if (temp)
		{
			memory = ft_substr(temp,0,ft_strlen(temp));
			printf("\n mem - %s",ft_substr(str,0, temp-str));
			*temp = 0;
			line = set_line(ft_substr(str, 0, temp-str), line);
			break;
		}
		else
		{
			line = set_line(str, line);
		}
	}
	if (flag == -1)
	{
		return (0);
	}
	return (line);
}
char *set_line(char *src, char *dest)
{
	// char *str;
	if (!dest)
	{
		return	(ft_strdup(src));
	}
	else
	{
		printf("\n dest - %s\n src - %s",dest,src);
		printf("\n res - %s",ft_strjoin("dest, src" , ", src"));

		return ft_strjoin(dest, src);
	}
}
