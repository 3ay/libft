/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fun_list_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vclarita <vclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 12:19:57 by vclarita          #+#    #+#             */
/*   Updated: 2020/11/11 14:05:17 by vclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *element;

	element = malloc(sizeof(t_list));
	if (element != NULL)
	{
		element->content = (void*)content;
		element->next = NULL;
	}
	return (element);
}
