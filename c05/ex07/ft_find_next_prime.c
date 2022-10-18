/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:20:35 by selbakya          #+#    #+#             */
/*   Updated: 2022/10/18 18:18:51 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	res;

	res = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb == 4)
		return (0);
	while (res < nb / res)
	{
		if (nb % res == 0)
			return (0);
		res++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	ptr;

	ptr = ft_is_prime(nb);
	if (ptr == 1)
		return (nb);
	if (ptr == 0)
		return (ft_find_next_prime(nb + 1));
	return (nb);
}
