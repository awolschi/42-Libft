/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 15:32:51 by awolschi          #+#    #+#             */
/*   Updated: 2024/10/13 17:01:33 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if ((char)c == '\0')
		return (i);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		str--;
	}
	if (str[i] == (char)c)
		return ((char *)(str + i));
	return (NULL);
}
