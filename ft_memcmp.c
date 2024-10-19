/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:50:08 by awolschi          #+#    #+#             */
/*   Updated: 2024/10/19 19:38:46 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Compare two memory areas.
/// @param s1 Pointer to the first memory area.
/// @param s2 Pointer to the second memory area.
/// @param n Number of bytes to compare.
/// @return An integer less than, equal to,
///	or greater than zero if the first n bytes of s1 is found,
/// respectively, to be less than, to match,
///	or be greater than the first n bytes of s2.
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*us1;
	const unsigned char	*us2;

	i = 0;
	us1 = (const unsigned char *)s1;
	us2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (us1[i] != us2[i])
			return (us1[i] - us2[i]);
		i++;
	}
	return (0);
}
