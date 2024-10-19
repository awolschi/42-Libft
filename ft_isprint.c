/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:54:19 by awolschi          #+#    #+#             */
/*   Updated: 2024/10/19 19:37:18 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Check if a character is printable, including space.
/// @param c The character to check.
/// @return Non-zero value if the character is printable, 0 otherwise.
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
