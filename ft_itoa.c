/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:29:35 by awolschi          #+#    #+#             */
/*   Updated: 2024/10/29 16:11:52 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdbool.h>

/// @brief Calculates the length of an integer when converted to a string.
/// @param n The integer to measure.
/// @return The length of the integer as a string.
static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		len = 11;
		return (len);
	}
	if (n <= 0)
	{
		len = 1;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

/// @brief Checks if an integer is negative.
/// @param n The integer to check.
/// @return 1 if the integer is negative, 0 otherwise.
int	is_neg(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

/// @brief Converts an integer to a null-terminated string.
/// @param n The integer to convert.
/// @return A pointer to the newly allocated string representing the integer.
char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		is_neg;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	is_neg = (n < 0);
	len = ft_intlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (is_neg)
		n = -n;
	while (len--)
	{
		str[len] = n % 10 + '0';
		n /= 10;
	}
	if (is_neg)
		str[0] = '-';
	return (str);
}
