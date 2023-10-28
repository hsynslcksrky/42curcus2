/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsarikay <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:18:07 by hsarikay          #+#    #+#             */
/*   Updated: 2023/09/19 20:49:04 by hsarikay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include <string.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*new;

	i = 0;
	new = (char *) malloc (1 * ft_strlen (src) + 1);
	if (new == NULL)
	{
		return (NULL);
	}
	while (*src)
	{
		new[i++] = *src++;
	}
	new[i] = '\0';
	return (new);
}
