/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vclarita <vclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 12:09:15 by vclarita          #+#    #+#             */
/*   Updated: 2020/11/15 17:18:11 by vclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*newstr;
	int		lenght;
	size_t	i;

	lenght = ft_strlen(str);
	i = 0;
	if (!str)
		return (NULL);
	newstr = (char*)malloc(sizeof(char) * (lenght + 1));
	if (!newstr)
		return (NULL);
	while (str[i])
	{
		newstr[i] = str[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
