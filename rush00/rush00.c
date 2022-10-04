/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltapasco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:21:03 by ltapasco          #+#    #+#             */
/*   Updated: 2022/07/10 19:44:41 by ltapasco         ###   ########.fr       */
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
			if (col == 1 || col == x)
			{
				if (li == 1 || li == y)
					ft_putchar('o');
				else
					ft_putchar('|');
			}
			else if (li == 1 || li == y)
				ft_putchar('-');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
