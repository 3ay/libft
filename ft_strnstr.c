/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vclarita <vclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 12:33:53 by vclarita          #+#    #+#             */
/*   Updated: 2020/11/17 12:38:20 by vclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t little_lenght;

	if (*little == '\0')
		return ((char *)big);
	little_lenght = ft_strlen(little);
	while (*big && len >= little_lenght)
	{
		if (ft_strncmp(big, little, little_lenght) == 0)
			return ((char *)big);
		big++;
		len--;
	}
	return (0);
}
