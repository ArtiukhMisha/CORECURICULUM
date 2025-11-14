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

int	out_str(va_list args)
{
	char	*str;
	int		counter;

	counter = 0;
	str = va_arg(args, char *);
	while (*(str + counter))
	{
		ft_putchar_fd(*(str + counter), 1);
		counter++;
	}
	return (counter);
}

int	out_int(va_list args)
{
	char	*str;
	int		n;
	int		counter;

	counter = 0;
	n = va_arg(args, int);
	str = ft_itoa(n);
	while (*(str + counter))
	{
		ft_putchar_fd(*(str + counter), 1);
		counter++;
	}
	return (counter);
}

int	out_unsign_decimal(va_list args)
{
	unsigned int	n;
	char			*str;
	int				counter;

	counter = 0;
	n = va_arg(args, unsigned int);
	str = ft_utoa(n);
	while (*(str + counter))
	{
		ft_putchar_fd(*(str + counter), 1);
		counter++;
	}
	return (counter);
}

int	out_hex_lower(va_list args)
{
	unsigned int	n;
	char			*str;
	int				counter;

	counter = 0;
	n = va_arg(args, unsigned int);
	str = ft_itohexa(n);
	while (*(str + counter))
	{
		ft_putchar_fd(*(str + counter), 1);
		counter++;
	}
	return (counter);
}

int	out_hex_upper(va_list args)
{
	unsigned int	n;
	char			*str;
	int				counter;

	counter = 0;
	n = va_arg(args, unsigned int);
	str = ft_itohexa(n);
	while (*(str + counter))
	{
		*(str + counter) = ft_toupper(*(str + counter));
		counter++;
	}
	counter = 0;
	while (*(str + counter))
	{
		ft_putchar_fd(*(str + counter), 1);
		counter++;
	}
	return (counter);
}
