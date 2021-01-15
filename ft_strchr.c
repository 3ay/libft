/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vclarita <vclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 20:50:18 by vclarita          #+#    #+#             */
/*   Updated: 2020/11/04 23:25:51 by vclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char value;
	char *pointer;

	pointer = (char*)str;
	value = (char)ch;
	if (value == '\0')
		return ((char *)str + ft_strlen(pointer));
	while (*str != '\0')
	{
		if (*str == value)
			return ((char*)str);
		str++;
	}
	return (NULL);
}
