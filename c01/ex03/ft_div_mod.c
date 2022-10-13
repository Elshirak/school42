/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 20:32:42 by selbakya          #+#    #+#             */
/*   Updated: 2022/10/06 22:38:29 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int c;
	int d;

	c = a / b;
	d = a % b;

	*div = c;
	*mod = d;
	printf("%d %d\n", *div, *mod);
	return ;
}

int	main()
{
	int	a;
	int	b;

	int *num;
	int *nbr;
	
	a = 42;
	b = 5;
	num = &a;
	nbr = &b;

	ft_div_mod(a, b, num, nbr);
	printf("%d %d\n", a, b);
	return (0);
}
