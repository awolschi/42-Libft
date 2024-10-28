/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:01:15 by awolschi          #+#    #+#             */
/*   Updated: 2024/10/28 15:44:11 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Writes a string to the specified file descriptor.
/// @param s The string to write.
/// @param fd The file descriptor to write to.
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
