/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:19:50 by awolschi          #+#    #+#             */
/*   Updated: 2024/10/19 19:54:33 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Join two strings into a new string.
/// @param s1 Pointer to the first null-terminated string.
/// @param s2 Pointer to the second null-terminated string.
/// @return A pointer to the newly allocated string containing the
/// concatenation of s1 and s2, or NULL if memory allocation fails.
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
