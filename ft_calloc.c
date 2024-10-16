/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:38:00 by awolschi          #+#    #+#             */
/*   Updated: 2024/10/16 19:36:58 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*mem;
	size_t	total_size;

	total_size = count * size;
	mem = malloc(total_size);
	if (!mem)
		return (NULL);
	ft_memset(mem, 0, total_size);
	return (mem);
}
