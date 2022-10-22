/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:20:25 by antgalan          #+#    #+#             */
/*   Updated: 2022/10/22 16:42:13 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @brief	Imprime un carácter según la figura descrita.
 * 
 * @param a		Coordenada 'a' del carácter a mostrar.
 * @param b 	Coordenada 'b' del carácter a mostrar.
 * @param max_x	Máxima coordenada 'x' (ancho) de la figura.
 * @param max_y Máxima coordenada 'y' (alto) de la figura.
*/
void	print_coords(int a, int b, int max_x, int max_y)
{
	max_x--;
	max_y--;

	if (a == 0 && b == 0)
		write(1, "/", 1);
	else if (a == max_x && b == 0)
		write(1, "\\", 1);
	else if (a == 0 && b == max_y)
		write(1, "\\", 1);
	else if (a == max_x && b == max_y)
		write(1, "/", 1);
	else if ((0 < a && a < max_x) && (0 < b && b < max_y))
		write(1, " ", 1);
	else
		write(1, "*", 1);
}

/**
 * @brief   Muestra la figura pedida de la siguiente forma:
 *
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
				print_coords(width, height, x, y);
				width++;
			}
			write(1, "\n", 1);
			height++;
		}
	}
}
