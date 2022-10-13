/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_short.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbalasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 21:29:15 by sbalasho          #+#    #+#             */
/*   Updated: 2022/10/02 13:43:15 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(char first, char middle, char last, int width)
{
	int	i;

	i = 0;
	write(1, &first, 1);
	while (i < width - 2)
	{
		write(1, &middle, 1);
		i++;
	}
	if (width > 1)
	{
		write(1, &last, 1);
	}
	write(1, "\n", 1);
}

void	rush(int x, int y)
{
	char	ii;

	ii = 0;
	if (y <= 0 || x <= 0)
	{
		write(1, "Negative or 0 parameter!\n", 25);
	}
	else if (y == 1)
	{
		print_line('/', '*', '\\', x);
	}
	else if (y > 1)
	{
		print_line('/', '*', '\\', x);
		while (ii < y - 2)
		{
			print_line('*', ' ', '*', x);
			ii++;
		}
		print_line('\\', '*', '/', x);
	}
}
