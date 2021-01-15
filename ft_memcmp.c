/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vclarita <vclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 13:15:41 by vclarita          #+#    #+#             */
/*   Updated: 2020/11/11 21:46:22 by vclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	unsigned char	*array1;
	unsigned char	*array2;
	size_t			i;

	i = 0;
	array1 = (unsigned char*)arr1;
	array2 = (unsigned char*)arr2;
	if (!n)
		return (0);
	while (i < n)
	{
		if (array1[i] != array2[i])
			return (array1[i] - array2[i]);
		i++;
	}
	return (0);
}
