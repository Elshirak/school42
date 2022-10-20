/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:53:11 by selbakya          #+#    #+#             */
/*   Updated: 2022/10/20 19:43:23 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_match(int size, char *sep, char **strs, char *dest_string)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	while (i < size - 1)
	{
		j = -1;
		while (strs[i][++j] != '\0')
		{
			dest_string[k] = strs[i][j];
			k++;
		}
		if (i < size - 1)
		{
			while (*sep != '\0')
			{
				dest_string[k] = *sep;
				k++;
				sep++;
			}
		}
		i++;
	}
	dest_string[++k] = '\0';
	return (dest_string);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		++i;
	return (i);
}

int	ft_arrlen(int size, char **strs)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	while (i < size)
	{
		k += ft_strlen(strs[i]);
		++i;
	}
	return (k);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		sep_len;
	int		arr_len;
	char	*dest_string;

	if (size == 0)
		return (0);
	arr_len = ft_arrlen(size, strs);
	sep_len = ft_strlen(sep);
	dest_string = malloc(sizeof(char) * ((sep_len * (size - 1)) + 1 + arr_len));
	if (!dest_string)
		return (0);
	return (ft_match(size, sep, strs, dest_string));
}
