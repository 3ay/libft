/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vclarita <vclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:44:47 by vclarita          #+#    #+#             */
/*   Updated: 2020/11/03 14:24:19 by vclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *array, int c, size_t n)
{
	size_t	i;
	char	*value;
	char	search_value;

	value = (char*)array;
	search_value = (char)c;
	i = 0;
	while (i < n)
	{
		if (*value == search_value)
			return (value);
		value++;
		i++;
	}
	return (NULL);
}
