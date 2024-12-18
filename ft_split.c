/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:57:04 by awolschi          #+#    #+#             */
/*   Updated: 2024/11/01 20:11:28 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Frees a 2D array of strings.
/// @param arr The array to be freed.
static void	free_split(char **arr, int len)
{
	int	i;

	i = 0;
	while (arr[i] && i < len)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

/// @brief Counts the number of words in a string separated by a given
/// delimiter.
/// @param s The string to be analyzed.
/// @param c The delimiter character.
/// @return The number of words in the string.
static int	word_count(char const *s, char c)
{
	int	words;

	words = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			words++;
			while (*s && *s != c)
				s++;
		}
	}
	return (words);
}

/// @brief Allocates memory for a word from a string starting at a given index
/// and ending at the next occurrence of a delimiter.
/// @param s The input string.
/// @param start The starting index of the word.
/// @param c The delimiter character.
/// @return A newly allocated string containing the word.
static char	*copy_word(char *s, int start, char c)
{
	int		len;
	char	*word;

	len = 0;
	while (s[start + len] && s[start + len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	len = 0;
	while (s[start] && s[start] != c)
		word[len++] = s[start++];
	word[len] = '\0';
	return (word);
}

static int	split_string(char const *s, char c, char **result)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			result[j++] = copy_word((char *)s, start, c);
			if (!result[j - 1])
			{
				free_split(result, j - 1);
				return (1);
			}
		}
	}
	result[j] = NULL;
	return (0);
}

/// @brief Splits a string into an array of words separated by a given
/// delimiter.
/// @param s The input string.
/// @param c The delimiter character.
/// @return An array of strings, each containing a word from the input string.
char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!result)
		return (NULL);
	if (split_string(s, c, result))
		return (NULL);
	return (result);
}
