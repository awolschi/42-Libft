/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awolschi <awolschi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:01:34 by awolschi          #+#    #+#             */
/*   Updated: 2024/10/28 15:50:44 by awolschi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief Applies a function to each character of a string,
///	passing the index and address of the character to the function.
/// @param s The input string.
/// @param f The function to apply to each character,
///	which takes the index and address of the character.
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
