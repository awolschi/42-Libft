/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 19:58:20 by awolschi          #+#    #+#             */
/*   Updated: 2024/10/19 19:46:52 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Extract a substring from a string.
/// @param s Pointer to the null-terminated string to extract from.
/// @param start Starting index of the substring in the string.
/// @param len Maximum length of the substring.
/// @return A pointer to the newly allocated substring,
///	or NULL if memory allocation fails.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	len_s;
	char	*substr;

	len_s = strlen(s);
	i = 0;
	substr = (char *)malloc(len + 1);
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
