/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:57:04 by awolschi          #+#    #+#             */
/*   Updated: 2024/10/21 17:01:43 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Counts the number of words in a string separated by a given
/// delimiter.
/// @param s The string to be analyzed.
/// @param c The delimiter character.
/// @return The number of words in the string.
int	word_count(char const *s, char c)
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
/// @param s The string from which the word will be extracted.
/// @param start The starting index of the word in the string.
/// @param c The delimiter character.
/// @return A pointer to the newly allocated word,
/// or NULL if memory allocation fails.
char	*malloc_word(char *s, int start, char c)
{
	int		end;
	char	*word;
	int		i;

	end = start;
	while (s[end] && s[end] != c)
		end++;
	word = (char *)malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

/// @brief Frees the memory allocated for an array of strings.
/// @param array The array of strings to be freed.
void	free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
		free(array[i++]);
	free(array);
}

/// @brief Copies a word from a string starting at a given index and ending at
/// the next occurrence of a delimiter.
/// @param s The string from which the word will be copied.
/// @param start The starting index of the word in the string.
/// @param c The delimiter character.
/// @return A pointer to the newly allocated and copied word,
///	or NULL if memory allocation fails.
char	*copy_word(char *s, int start, char c, size_t word_index)
{
	int		end;
	char	*word;
	int		i;

	end = start;
	while (s[end] && s[end] != c)
		end++;
	word = (char *)malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

/// @brief Splits a string into an array of words separated by a given
/// delimiter.
/// @param s The string to be split.
/// @param c The delimiter character.
/// @return A pointer to an array of strings (words),
///	or NULL if memory allocation fails.
char	**ft_split(const char *s, char c)
{
	size_t	words;
	size_t	word_index;
	char	**str;

	if (s == NULL)
		return (NULL);
	words = word_count(s, c);
	word_index = 0;
	str = malloc((words + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	str[words] = NULL;
	if (copy_word(str, s, c, &word_index))
	{
		free_array(str);
		return (NULL);
	}
	return (str);
}
