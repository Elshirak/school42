/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_views.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selbakya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 23:26:28 by selbakya          #+#    #+#             */
/*   Updated: 2022/10/09 23:28:17 by selbakya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_view_top(char **board, int pos);
int	check_view_bottom(char **board, int pos);
int	check_view_left(char **board, int pos);
int	check_view_right(char **board, int pos);

int	check_line(char **board, int line)
{
	unsigned char	row_latin;
	unsigned char	col_latin;
	int				i;

	row_latin = 0;
	col_latin = 0;
	i = 1;
	while (i < 5)
	{
		row_latin ^= 1 << board[line][i];
		col_latin ^= 1 << board[i++][line];
	}
	if (row_latin != 30 || col_latin != 30)
		return (0);
	return (1);
}

int	check_view(char **board, int pos)
{
	if (pos >= 0 && pos <= 3)
		return (check_view_left(board, pos));
	if (pos >= 4 && pos <= 7)
		return (check_view_top(board, pos));
	if (pos >= 8 && pos <= 11)
		return (check_view_right(board, pos));
	if (pos >= 12 && pos <= 15)
		return (check_view_bottom(board, pos));
	return (0);
}

int	check_solution(char **board)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (!check_line(board, i))
			return (0);
		i++;
	}
	i = 0;
	while (i < 16)
	{
		if (!check_view(board, i))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
