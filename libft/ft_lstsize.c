/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martiukh <martiukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 22:04:14 by martiukh          #+#    #+#             */
/*   Updated: 2025/09/29 22:21:29 by martiukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 1;
	if (!lst)
	{
		return (0);
	}
	while (lst->next)
	{
		counter++;
		lst = lst->next;
	}
	return (counter);
}
