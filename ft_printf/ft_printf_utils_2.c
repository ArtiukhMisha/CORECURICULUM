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

#include "ft_printf.h"

int	out_ptr(va_list args)
{
	char					*str;
	unsigned long long int	ptr;
	int						counter;

	counter = 0;
	write(1, "0x", 2);
	ptr = va_arg(args, unsigned long long int);
	str = ft_itohexa(ptr);
	while (*(str + counter))
	{
		ft_putchar_fd(*(str + counter), 1);
		counter++;
	}
	return (counter + 2);
}
