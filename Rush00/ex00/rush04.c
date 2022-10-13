/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:48:31 by selbakya          #+#    #+#             */
/*   Updated: 2022/10/02 19:04:07 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	first_line(int x);
void	middle_line(int x);
void	last_line(int x);

void	rush(int x, int y)
{
	int	length;

	length = 2;
	if (x <= 0 || y <= 0)
	{
		write(1, "Negative or 0 parameter!\n", 25);
	}
	else if (x == 1 && y == 1)
	{
		write(1, "A\n", 2);
	}
	else if (y == 1)
	{
		first_line(x);
	}
	else
	{
		first_line(x);
		while (length < y)
		{
			middle_line(x);
			length++;
		}
		last_line(x);
	}
}

void	first_line(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			write(1, "A", 1);
		}
		else if (i == x)
		{
			write(1, "C", 1);
		}
		else if (i < x)
		{
			write(1, "B", 1);
		}
		i++;
	}
	write(1, "\n", 1);
	return ;
}

void	middle_line(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1 || i == x)
		{
			ft_putchar('B');
		}
		else
		{
			write(1, " ", 1);
		}
		i++;
	}
	write(1, "\n", 1);
	return ;
}

void	last_line(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			write(1, "C", 1);
		}
		else if (i == x)
		{
			write(1, "A", 1);
		}
		else if (i < x)
		{
			write(1, "B", 1);
		}
		++i;
	}
	write(1, "\n", 1);
	return ;
}
