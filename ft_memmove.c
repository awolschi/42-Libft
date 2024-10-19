/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:21:08 by awolschi          #+#    #+#             */
/*   Updated: 2024/10/19 19:39:28 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Copy memory area, handling overlapping memory areas correctly.
/// @param dst Pointer to the destination memory area.
/// @param src Pointer to the source memory area.
/// @param len Number of bytes to copy.
/// @return A pointer to the destination memory area.
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*cdst;
	const char	*ccsrc;
	size_t		i;

	cdst = (char *)dst;
	ccsrc = (const char *)src;
	i = 0;
	if (cdst == ccsrc)
		return (dst);
	if (cdst > ccsrc)
		while (len-- > 0)
			cdst[len] = ccsrc[len];
	else
	{
		i = 0;
		while (i < len)
		{
			cdst[i] = ccsrc[i];
			i++;
		}
	}
	return (dst);
}
