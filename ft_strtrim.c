/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:11:46 by awolschi          #+#    #+#             */
/*   Updated: 2024/10/19 19:52:36 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Trim the characters from the beginning and end of a string.
/// @param s1 Pointer to the null-terminated string to be trimmed.
/// @param set Pointer to the null-terminated set of characters to be trimmed.
/// @return A pointer to the newly allocated trimmed string,
///	or NULL if memory allocation fails.
char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end >= start && ft_strchr(set, s1[end]))
		end--;
	str = (char *)malloc(end - start + 2);
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
}
