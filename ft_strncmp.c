/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vclarita <vclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 13:58:01 by vclarita          #+#    #+#             */
/*   Updated: 2020/11/11 22:02:32 by vclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char	*f_str;
	unsigned char	*sc_str;
	size_t			i;

	i = 0;
	f_str = (unsigned char*)str1;
	sc_str = (unsigned char*)str2;
	while ((f_str[i] || sc_str[i]) && i < n)
	{
		if (f_str[i] != sc_str[i])
			return (f_str[i] - sc_str[i]);
		i++;
	}
	return (0);
}
