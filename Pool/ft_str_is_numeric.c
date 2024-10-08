/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <mmarinov@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:14:41 by mmarinov          #+#    #+#             */
/*   Updated: 2024/05/07 14:57:46 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[c] != '\0')
	{
		if (str[c] < 48 || str[c] > 57)
		{
			return (0);
		}
		c++;
	}
	return (1);
}
