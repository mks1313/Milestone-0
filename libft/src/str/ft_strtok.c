/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtok.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:36:13 by mmarinov          #+#    #+#             */
/*   Updated: 2025/02/26 14:46:37 by mmarinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtok(char *str, const char *delim)
{
	static char	*last;
	char		*start;

	last = NULL;
	/* Si str es NULL, usamos la última cadena almacenada */
	if (str == NULL)
		str = last;
	/* Si ya no queda nada que procesar */
	if (str == NULL || *str == '\0')
		return (NULL);
	/* Ignoramos los delimitadores iniciales */
	while (*str && ft_strchr(delim, *str))
		str++;
	/* Guardamos el comienzo del token */
	start = str;
	/* Buscamos el final del token */
	while (*str && !ft_strchr(delim, *str))
		str++;
	/* Si encontramos un delimitador, lo reemplazamos por '\0' */
	if (*str)
	{
		*str = '\0';
		last = str + 1;
	}
	else
		last = NULL;
	return (start);
}
