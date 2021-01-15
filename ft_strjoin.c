/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vclarita <vclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 21:59:45 by vclarita          #+#    #+#             */
/*   Updated: 2020/11/11 16:41:00 by vclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*array;
	int		f_lenght;
	int		s_lenght;

	if (s1 && s2)
	{
		i = 0;
		j = 0;
		f_lenght = ft_strlen(s1);
		s_lenght = ft_strlen(s2);
		array = (char *)malloc((f_lenght + s_lenght + 1) * sizeof(char));
		if (!array)
			return (NULL);
		while (s1[i])
			array[j++] = s1[i++];
		i = 0;
		while (s2[i])
			array[j++] = s2[i++];
		array[j] = '\0';
		return (array);
	}
	return (NULL);
}
