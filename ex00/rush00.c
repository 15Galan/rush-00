/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 08:57:06 by antgalan          #+#    #+#             */
/*   Updated: 2022/10/26 14:00:16 by antgalan         ###   ########.fr       */
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
	if ((a == 0 || a == max_x) && (b == 0 || b == max_y))
		ft_putchar('o');
	else if (a == 0 || a == max_x)
		ft_putchar('|');
	else if (b == 0 || b == max_y)
		ft_putchar('-');
	else
		ft_putchar(' ');
}

/**
 * @brief	Displays the requested figure according to RUSH 00.
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
