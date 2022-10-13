/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:53:55 by selbakya          #+#    #+#             */
/*   Updated: 2022/10/07 13:13:12 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*ans;

	ans = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ans);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*src = "Hello";
	char	*dest = "f";
	int		i;

	i = 0;
	printf("%s\n", ft_strcpy(dest, src));
	printf("%s\n", strcpy(dest, src));
	return (0);
}

