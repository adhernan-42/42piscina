/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltapasco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:48:38 by ltapasco          #+#    #+#             */
/*   Updated: 2022/07/10 19:43:39 by ltapasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
	{
	int	li;
	int	col;

	li = 0;
	while (++li <= y)
	{
		col = 0;
		while (++col <= x)
		{
			if ((li == 1 || li == y) && (col == 1 || col == x))
			{
				if ((col == 1 && li == 1) || (col == x && li == y))
					ft_putchar('/');
				else if ((col == 1 && li == y) || (col == x && li == 1))
					ft_putchar('\\');
				else if (col == x && li == y)
					ft_putchar('*');
			}
			else if (col == 1 || col == x || li == 1 || li == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
