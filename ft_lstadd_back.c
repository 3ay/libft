/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fun_list_add_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vclarita <vclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 14:23:58 by vclarita          #+#    #+#             */
/*   Updated: 2020/11/11 14:47:47 by vclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *pointer;

	pointer = *lst;
	if (pointer != NULL)
	{
		while (pointer->next != 0)
			pointer = pointer->next;
		pointer->next = new;
	}
	else
		*lst = new;
}
