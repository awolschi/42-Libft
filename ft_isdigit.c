/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:29:56 by awolschi          #+#    #+#             */
/*   Updated: 2024/10/19 19:36:57 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Check if a character is a digit (0-9).
/// @param c The character to check.
/// @return Non-zero value if the character is a digit, 0 otherwise.
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
