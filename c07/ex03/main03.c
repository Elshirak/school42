/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                            :+:      :+:   :+:   */
/*                                                      +:+ +:+        +:+    */
/*   By: aelsakov <marvin@42.fr>                      +#+  +:+       +#+      */
/*                                                   +#+#+#+#+#+  +#+         */
/*   Created: 2022/10/12 15:09:46 by aelsakov            #+#    #+#           */
/*   Updated: 2022/10/20 18:44:31 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);

void	test_ex03(void)
{
	char	*(str[4]);
	char	*s;

	str[0] = "text";
	str[1] = "for";
	str[2] = "ft_strjoin";
	str[3] = "testing\n";
	s = ft_strjoin(2, str + 2, "|");
	printf("%s", s);
	free(s);
	s = ft_strjoin(0, str, "ewijhfuiewhfuiwehfui");
	printf("%s\n", ft_strjoin(0, str, ""));
	free(s);
	printf("%s", ft_strjoin(4, str, " "));
	printf("%s", ft_strjoin(3, str + 1, "*sep*"));
}

int	main(void)
{
	printf("\nTesting ex03:\n");
	test_ex03();
}
