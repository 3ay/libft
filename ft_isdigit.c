/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vclarita <vclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:50:53 by vclarita          #+#    #+#             */
/*   Updated: 2020/11/05 18:09:09 by vclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int character)
{
	char start;
	char end;

	start = 48;
	end = 57;
	if ((character >= start) && (character <= end))
		return (1);
	return (0);
}
