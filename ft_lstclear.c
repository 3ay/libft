/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fun_list_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vclarita <vclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:06:00 by vclarita          #+#    #+#             */
/*   Updated: 2020/11/11 15:33:51 by vclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*obj;
	t_list	*temp;

	obj = *lst;
	while (obj != NULL)
	{
		temp = obj;
		obj = obj->next;
		del(temp->content);
		free(temp);
	}
	*lst = NULL;
}
