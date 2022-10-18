/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:32:14 by selbakya          #+#    #+#             */
/*   Updated: 2022/10/18 14:36:02 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	j = argc;
	i = 0;
	while (j > 1)
	{
		i = 0;
		while (argv[j - 1][i] != '\0')
		{
			write(1, &argv[j - 1][i], 1);
			++i;
		}
		--j;
		write(1, "\n", 1);
	}
	return (0);
}
