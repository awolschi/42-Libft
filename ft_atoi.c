/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:02:43 by awolschi          #+#    #+#             */
/*   Updated: 2024/10/16 17:14:31 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	c;
	int	r;
	int	s;

	c = 0;
	r = 0;
	s = 1;
	while (*str && (*str == ' ' || (*str >= 9 && *str <= 13)))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s *= -1;
		c++;
		if (c > 1)
			return (0);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		r = r * 10 + *str - '0';
		str++;
	}
	return (r * s);
}
