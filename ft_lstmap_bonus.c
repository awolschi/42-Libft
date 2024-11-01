/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 19:14:58 by awolschi          #+#    #+#             */
/*   Updated: 2024/11/01 20:21:53 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/// @brief Iterates the list 'lst' and applies the function 'f' to the content
/// of each element.
/// Creates a new list resulting from the successive applications of 'f'.
/// The 'del' function is used to delete the content of an element if needed.
/// @param lst The address of a pointer to an element.
/// @param f The address of a function used to iterate on the list.
/// @param del The address of a function used to delete the content of an
/// element if needed.
/// @return The new list, or NULL if the allocation fails.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_element;
	t_list	*tmp;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		new_element = ft_lstnew(tmp);
		if (!new_element)
		{
			del(tmp);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_element);
		lst = lst->next;
	}
	return (new_list);
}
