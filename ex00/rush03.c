/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:20:25 by antgalan          #+#    #+#             */
/*   Updated: 2022/10/26 13:59:58 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/**
 * @brief	Prints a character according to the figure described.
 * 
 * @param a		Coordinate 'a' of the character to display.
 * @param b		Coordinate 'b' of the character to display.
 * @param max_x Maximum 'x' coordinate (width) of the figure.
 * @param max_y Maximum 'y' coordinate (height) of the figure.
 */
void	select_char(int a, int b, int max_x, int max_y)
{
	max_x--;
	max_y--;
	if (a == 0 && (b == 0 || b == max_y))
		ft_putchar('A');
	else if (a == max_x && (b == 0 || b == max_y))
		ft_putchar('C');
	else if ((0 < a && a < max_x) && (0 < b && b < max_y))
		ft_putchar(' ');
	else
		ft_putchar('B');
}

/**
 * @brief	Displays the requested figure according to RUSH 03.
 *
 * @param x		Total width of the shape.
 * @param y		Total height of the shape.
 */
void	rush(int x, int y)
{
	int	width;
	int	height;

	if (0 < x && 0 < y)
	{
		height = 0;
		while (height < y)
		{
			width = 0;
			while (width < x)
			{
				select_char(width, height, x, y);
				width++;
			}
			ft_putchar('\n');
			height++;
		}
	}
}
