/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vclarita <vclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 23:46:50 by vclarita          #+#    #+#             */
/*   Updated: 2020/11/05 00:17:48 by vclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	value;
	size_t	length;

	length = ft_strlen(str);
	value = (char)ch;
	if (value == '\0')
		return ((char *)str + length);
	while (length--)
	{
		if (*(str + length) == ch)
			return ((char*)(str + length));
	}
	return (NULL);
}
