/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:30:40 by selbakya          #+#    #+#             */
/*   Updated: 2022/10/03 22:37:29 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_num(int sotn, int dec, int edin)
{
	ft_putchar('0' + sotn);
	ft_putchar('0' + dec);
	ft_putchar('0' + edin);
}

void	ft_print_comb(void)
{
	char	edin;
	char	dec;
	char	sotn;

	sotn = 0;
	while (sotn <= 7)
	{
		dec = sotn + 1;
		while (dec <= 8)
		{
			edin = dec + 1;
			while (edin <= 9)
			{
				print_num(sotn, dec, edin);
				if (sotn != 7)
				{
					write(1, ", ", 2);
				}
				++edin;
			}
			++dec;
		}
		++sotn;
	}
}
