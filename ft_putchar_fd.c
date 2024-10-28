/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:34:28 by awolschi          #+#    #+#             */
/*   Updated: 2024/10/28 15:47:38 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Writes a character to the specified file descriptor.
/// @param c The character to write.
/// @param fd The file descriptor to write to.
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
