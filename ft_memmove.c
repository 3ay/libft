/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vclarita <vclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:44:16 by vclarita          #+#    #+#             */
/*   Updated: 2020/10/31 21:29:09 by vclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	size_t i;

	i = 0;
	if (source == destination)
		return (destination);
	if (source < destination)
	{
		while (++i <= n)
			((char*)destination)[n - i] = ((char*)source)[n - i];
	}
	else
	{
		i = 0;
		while (n > 0)
		{
			((char*)destination)[i] = ((char*)source)[i];
			i++;
			n--;
		}
	}
	return (destination);
}
