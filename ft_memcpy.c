/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vclarita <vclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:37:24 by vclarita          #+#    #+#             */
/*   Updated: 2020/11/15 13:02:33 by vclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	size_t i;

	i = 0;
	if ((destination == source) || (n == 0))
		return (destination);
	while (i < n)
	{
		((char*)destination)[i] = ((char*)source)[i];
		i++;
	}
	return (destination);
}
