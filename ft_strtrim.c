/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vclarita <vclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:15:49 by vclarita          #+#    #+#             */
/*   Updated: 2020/11/15 16:16:44 by vclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_first(char const *array, int first, char const *setter)
{
	int	i;
	int	f_index;

	i = 0;
	while (array[first])
	{
		i = 0;
		f_index = first;
		while (setter[i])
		{
			while (setter[i] == array[first])
				first++;
			i++;
		}
		if (f_index == first)
			return (first);
	}
	return (first);
}

int		ft_last(char const *array, int last, int first, char const *setter)
{
	int	i;
	int l_index;

	i = 0;
	l_index = last;
	while (last > first)
	{
		i = 0;
		l_index = last;
		while (setter[i])
		{
			while (setter[i] == array[last])
				last--;
			i++;
		}
		if (l_index == last)
			return (last);
	}
	return (last);
}

char	*ft_strtrim(char const *array, char const *setter)
{
	int		i;
	int		first;
	int		last;
	char	*res_array;

	if (!array)
		return (NULL);
	if (!setter)
		return (NULL);
	first = 0;
	first = ft_first(array, first, setter);
	if (!array[first])
		return (ft_strdup(""));
	last = ft_strlen(array) - 1;
	last = ft_last(array, last, first, setter);
	i = last - first + 1;
	res_array = (char*)malloc(sizeof(char) * i + 1);
	if (!res_array)
		return (NULL);
	i = 0;
	while (first <= last)
		res_array[i++] = array[first++];
	res_array[i] = '\0';
	return (res_array);
}
