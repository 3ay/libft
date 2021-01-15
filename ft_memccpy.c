/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vclarita <vclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 13:00:28 by vclarita          #+#    #+#             */
/*   Updated: 2020/10/31 21:06:48 by vclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((char*)destination)[i] = ((char*)source)[i];
		if (((char*)destination)[i] == (char)c)
			return ((void*)(destination + i + 1));
		++i;
	}
	return (NULL);
}
