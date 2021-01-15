/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vclarita <vclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 11:30:16 by vclarita          #+#    #+#             */
/*   Updated: 2020/11/15 13:02:05 by vclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	char	*array;
	size_t	i;
	size_t	res;

	i = 0;
	res = number * size;
	array = (char*)malloc(res);
	if (!array)
		return (NULL);
	while (res--)
	{
		((char*)array)[i] = '\0';
		i++;
	}
	return (array);
}
