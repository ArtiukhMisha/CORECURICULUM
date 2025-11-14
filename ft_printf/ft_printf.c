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

static int	count_args(const char *str);
static int	out_all(const char *str, va_list args);
static int	out_arg(const char str, va_list args);

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		res;

	va_start(args, str);
	res = out_all(str, args);
	va_end(args);
	return (res);
}

static int	out_arg(const char str, va_list args)
{
	if (str == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		return (1);
	}
	if (str == 's')
		return (out_str(args));
	if (str == 'p')
		return (out_ptr(args));
	if (str == 'i' || str == 'd')
		return (out_int(args));
	if (str == 'u')
		return (out_unsign_decimal(args));
	if (str == 'x')
		return (out_hex_lower(args));
	if (str == 'X')
		return (out_hex_upper(args));
	if (str == '%')
	{
		ft_putchar_fd('%', 1);
		return (1);
	}
	return (0);
}

static int	out_all(const char *str, va_list args)
{
	char	*symbs;
	int		counter;

	counter = 0;
	symbs = "cspdiuxX%";
	while (*str)
	{
		if (*str == '%' && *(str + 1) && ft_char_in(symbs, *(str + 1)))
		{
			counter += out_arg(*(str + 1), args);
			str += 2;
		}
		if (!(*str == '%') && *str)
		{
			write(1, str, 1);
			str++;
			counter++;
		}
	}
	return (counter);
}
