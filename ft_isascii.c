/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:43:02 by awolschi          #+#    #+#             */
/*   Updated: 2024/10/19 19:36:18 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Check if a character is an ASCII character.
/// @param c The character to check.
/// @return Non-zero value if the character is an ASCII character, 0 otherwise.
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
