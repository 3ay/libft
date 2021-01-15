/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vclarita <vclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 15:06:53 by vclarita          #+#    #+#             */
/*   Updated: 2020/11/05 18:08:35 by vclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int character)
{
	if (((character >= 65) && (character < 91)) ||
	((character > 96) && (character <= 122)))
		return (1);
	return (0);
}
