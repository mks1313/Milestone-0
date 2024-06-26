/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:00:36 by mmarinov          #+#    #+#             */
/*   Updated: 2024/05/07 16:32:03 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[c] != '\0')
	{
		if (str[c] <= 31 || str[c] >= 127)
		{
			return (0);
		}
		c++;
	}
	return (1);
}
