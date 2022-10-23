/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antgalan <antgalan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 08:57:06 by antgalan          #+#    #+#             */
/*   Updated: 2022/10/23 09:28:27 by antgalan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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
 * @brief   Muestra la figura pedida según el RUSH 00.
 *
 * @param x		Ancho total de la figura.
 * @param y		Alto total de la figura.
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
			ft_putchar('\n');
			height++;
		}
	}
}
