/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vclarita <vclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 12:14:10 by vclarita          #+#    #+#             */
/*   Updated: 2020/11/11 22:37:34 by vclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_abs(int number)
{
	if (number < 0)
		return (-number);
	return (number);
}

int		ft_lenght(int number)
{
	int size;

	if (number <= 0)
		size = 1;
	else
		size = 0;
	while (number != 0)
	{
		number = number / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*array;
	int		sign;
	int		lenght;

	if (n < 0)
		sign = -1;
	else
		sign = 1;
	lenght = ft_lenght(n);
	array = (char *)malloc(sizeof(char) * lenght + 1);
	if (!array)
		return (NULL);
	array[lenght] = '\0';
	while (--lenght >= 0)
	{
		array[lenght] = 48 + ft_abs(n % 10);
		n = ft_abs(n / 10);
	}
	if (sign == -1)
		array[0] = '-';
	return (array);
}
