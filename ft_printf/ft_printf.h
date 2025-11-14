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

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include "./libft/libft.h"

size_t	ft_strlen(const char *str);
int		ft_printf(const char *str, ...);
char	*ft_strchr(const char *s, int c);
char	*ft_itoa(int n);
int		out_str(va_list args);
int		out_int(va_list args);
int		out_ptr(va_list args);
int		out_unsign_decimal(va_list args);
int		out_hex_lower(va_list args);
int		out_hex_upper(va_list args);

#endif
