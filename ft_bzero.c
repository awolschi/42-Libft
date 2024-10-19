/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:05:29 by awolschi          #+#    #+#             */
/*   Updated: 2024/10/19 19:33:07 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Set the first n bytes of the memory area pointed to by s to zero.
/// @param s Pointer to the memory area to be zeroed.
/// @param n Number of bytes to set to zero.
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
