/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:27:21 by selbakya          #+#    #+#             */
/*   Updated: 2022/10/02 18:56:33 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
void	ft_putchar(char c);

int	main(void)
{
	rush(0, 7);
	ft_putchar('\n');
	rush(-6, 7);
	ft_putchar('\n');
	rush(6, 0);
	ft_putchar('\n');
	rush(6, -3);
	ft_putchar('\n');
	rush(5, 3);
	ft_putchar('\n');
	rush(5, 1);
	ft_putchar('\n');
	rush(1, 1);
	ft_putchar('\n');
	rush(1, 5);
	ft_putchar('\n');
	rush(4, 4);
	ft_putchar('\n');
	rush(42, 123);
	ft_putchar('\n');
	return (0);
}
