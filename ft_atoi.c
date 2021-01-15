/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vclarita <vclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 17:40:37 by vclarita          #+#    #+#             */
/*   Updated: 2020/11/15 13:39:47 by vclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t		i;
	long long	numbers;
	long long	mines_c;
	long long	check_out;

	i = 0;
	numbers = 0;
	mines_c = 1;
	check_out = 0;
	while ((str[i] == 32) || ((str[i] >= 9) && (str[i] <= 13)))
		i++;
	mines_c = ((str[i]) == 45) ? -1 : 1;
	if (str[i] == 45 || str[i] == 43)
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		numbers = numbers * 10 + (long long)str[i] - '0';
		i++;
		if (numbers < check_out && mines_c == -1)
			return (0);
		if (numbers < check_out && mines_c == 1)
			return (-1);
		check_out = numbers;
	}
	return (mines_c * numbers);
}
