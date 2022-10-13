/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:18:48 by selbakya          #+#    #+#             */
/*   Updated: 2022/09/30 12:03:53 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	alfavit;

	alfavit = 'a';
	while (alfavit <= 'z')
	{
		ft_putchar(alfavit);
		alfavit++;
	}
	return ;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}
