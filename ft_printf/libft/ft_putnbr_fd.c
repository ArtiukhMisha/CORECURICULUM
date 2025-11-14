/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 10:49:17 by martiukh          #+#    #+#             */
/*   Updated: 2025/07/03 11:15:48 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	s[30];
	int		counter;
	int		sign;

	sign = 1;
	counter = 0;
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n < 0)
		sign = -1;
	while (n)
	{
		s[counter++] = n % 10 * sign + '0';
		n = n / 10;
	}
	if (sign < 0)
	{
		s[counter] = '-';
		counter++;
	}
	while (counter--)
		write(fd, &s[counter], 1);
}
