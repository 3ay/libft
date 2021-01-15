/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vclarita <vclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 22:43:07 by vclarita          #+#    #+#             */
/*   Updated: 2020/11/15 13:07:18 by vclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	number_words_getter(char const *string, char symbol)
{
	size_t	i;
	int		number_words;
	int		new_word_status;

	i = 0;
	number_words = 0;
	new_word_status = 1;
	while (string[i])
	{
		if (new_word_status && string[i] != symbol)
		{
			number_words++;
			new_word_status = 0;
		}
		if (string[i] == symbol)
			new_word_status = 1;
		i++;
	}
	return (number_words);
}

static char	*next_word_getter(char const *string, char symbol, size_t *first)
{
	size_t	start_index;

	while (string[*first] == symbol)
		*first += 1;
	start_index = *first;
	while (string[*first])
	{
		if (string[*first] == symbol)
			break ;
		*first += 1;
	}
	return (ft_substr(string, start_index, *first - start_index));
}

char		**check_string(char **string, int number_words)
{
	int i;

	i = 0;
	while (i < number_words)
	{
		free(string[i]);
		i++;
	}
	free(string);
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	int		number_words;
	char	**split_string;
	size_t	i;
	size_t	first;

	if (!s)
		return (0);
	i = 0;
	first = 0;
	number_words = number_words_getter(s, c);
	split_string = (char**)malloc(sizeof(char*) * (number_words + 1));
	if (!split_string)
		return (NULL);
	while (number_words--)
	{
		split_string[i] = next_word_getter(s, c, &first);
		if (!split_string[i])
			return (check_string(split_string, i));
		i++;
	}
	split_string[i] = 0;
	return (split_string);
}
