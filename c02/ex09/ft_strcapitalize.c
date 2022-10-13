/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:50:53 by selbakya          #+#    #+#             */
/*   Updated: 2022/10/12 13:19:14 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char	*str)
{
	int	i;

	i = 0;
	if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	i++;
	while (str[i] != '\0')
	{
		if (!((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= 48 && str[i - 1] <= 57))
			&& (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		else if (!((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= 48 && str[i - 1] <= 57))
			&& (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i];
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

#include <stdio.h>
int	main()
{
	char str[38] = "Hel34lo! ther-een  123GHhgG kj   5yg[d";

	ft_strcapitalize(str);
	printf("%s\n", str);
	return (0);
}
