/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 22:43:41 by selbakya          #+#    #+#             */
/*   Updated: 2022/10/20 13:12:00 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	if (!src)
		return (0);
	str = malloc(1 + ft_strlen(src));
	if (str == 0)
		return (0);
	while (*src != '\0')
	{
		str[i] = *src;
		++i;
		++src;
	}
	str[i] = '\0';
	return (str);
}
