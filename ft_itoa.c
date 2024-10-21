/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:29:35 by awolschi          #+#    #+#             */
/*   Updated: 2024/10/21 19:21:16 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdbool.h>

int	ft_intlen(int n)
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

int	ft_isneg(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

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

// char	*ft_itoa(int n)
// {
// 	char	*str;
// 	int		len;
//
// 	len = ft_intlen(n);
// 	str = (char *)malloc((len + 1) * sizeof(char));
// 	if (!str)
// 		return (NULL);
// 	str[len] = '\0';
// 	if (n == 0)
// 		str[0] = '0';
// 	if (n == -2147483648)
// 	{
// 		str = "-2147483648";
// 		return (str);
// 	}
// 	len += ft_isneg(n);
// 	if (ft_isneg(n))
// 		n = -n;
// 	while (n)
// 	{
// 		str[--len] = (n % 10 + '0');
// 		n /= 10;
// 	}
// 	if (ft_isneg(n))
// 		str[0] = '-';
// 	return (str);
// }
//
// int	main(void)
// {
// 	printf("||%s||", ft_itoa(-1024));
// }
