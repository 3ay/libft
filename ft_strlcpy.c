/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vclarita <vclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:34:05 by vclarita          #+#    #+#             */
/*   Updated: 2020/11/11 22:08:40 by vclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (src == 0)
		return (0);
	if (dst != src)
	{
		while (src[i] != '\0' && size > 1)
		{
			dst[i] = src[i];
			i++;
			size--;
		}
		if (size > 0)
			dst[i] = '\0';
	}
	return (ft_strlen(src));
}
