/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 18:17:50 by awolschi          #+#    #+#             */
/*   Updated: 2024/11/01 20:18:01 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Takes as a parameter an element and frees the memory of the
/// element's content
/// using the function 'del' given as a parameter and free(3). The memory of
/// 'next' must not be freed.
/// @param lst The element to free.
/// @param del The address of a function used to delete the content of the
/// element.
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
