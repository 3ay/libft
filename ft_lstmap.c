/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fun_list_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vclarita <vclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:44:46 by vclarita          #+#    #+#             */
/*   Updated: 2020/11/11 16:17:20 by vclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *map_lst;
	t_list *temp;

	if (lst == NULL || f == NULL)
		return (NULL);
	map_lst = NULL;
	while (lst)
	{
		temp = ft_lstnew((*f)(lst->content));
		if (!temp)
		{
			ft_lstclear(&map_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&map_lst, temp);
		lst = lst->next;
	}
	return (map_lst);
}
