/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:25:36 by selbakya          #+#    #+#             */
/*   Updated: 2022/10/20 13:39:21 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	capasity;

	if (min >= max)
		return (0);
	capasity = max - min;
	*range = (int *)malloc(capasity * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < capasity)
	{
		*(*range + i) = min + i;
		++i;
	}
	return (capasity);
}
