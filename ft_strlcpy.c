/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:49:08 by awolschi          #+#    #+#             */
/*   Updated: 2024/10/19 19:44:49 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Copy a string to a size-bounded buffer.
/// @param dst Pointer to the destination buffer.
/// @param src Pointer to the null-terminated source string.
/// @param dstsize Size of the destination buffer.
/// @return The total length of the string it tried to copy (length of src).
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = ft_strlen(src);
	if (i + 1 < dstsize)
		ft_memcpy(dst, src, i + 1);
	else if (dstsize)
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (i);
}
