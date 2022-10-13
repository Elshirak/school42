/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:51:44 by selbakya          #+#    #+#             */
/*   Updated: 2022/10/13 21:08:10 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[j] != '\0')
		++j;
	while (src[i] != '\0' && i < nb)
	{
		dest[j] = src[i];
		++i;
		++j;
	}
	dest[j] = '\0';
	return (dest);
}
