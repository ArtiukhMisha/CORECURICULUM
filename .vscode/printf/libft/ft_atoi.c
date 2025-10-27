/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 12:37:27 by martiukh          #+#    #+#             */
/*   Updated: 2025/09/29 22:46:41 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str);
static int	is_space(char look_for);

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (is_space(*str))
	{
		str++;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	if (*str < '0' || *str > '9')
		return (res);
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (sign * res);
}

static int	is_space(char look_for)
{
	char	*spaces;
	int		i;
	int		res;

	spaces = " \n\f\r\t\v";
	res = 0;
	i = 0;
	while (spaces[i])
	{
		if (look_for == spaces[i])
		{
			res = 1;
		}
		i++;
	}
	return (res);
}
/*int main()
{
	int res;
	char *str;
	str = "   \n--+--+021s234ab567";
	res = ft_atoi(str);
	printf("%d",res);
	return (0);*
}*/
