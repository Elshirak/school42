/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 18:42:46 by selbakya          #+#    #+#             */
/*   Updated: 2022/10/13 21:13:43 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	leng_dest;
	unsigned int	leng_src;
	unsigned int	ls;
	unsigned int	j;

	leng_dest = 0;
	leng_src = 0;
	j = 0;
	while (dest[leng_dest] != '\0')
		++leng_dest;
	while (src[leng_src] != '\0')
		++leng_src;
	if (size == 0 || size <= leng_dest)
		return (leng_src + size);
	ls = leng_dest;
	while (j < size - leng_dest - 1 && src[j] != '\0')
	{
		dest[ls] = src[j];
		++j;
		++ls;
	}
	dest[ls] = '\0';
	return (leng_dest + leng_src);
}
