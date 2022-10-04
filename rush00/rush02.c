/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltapasco <ltapasco@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:57:34 by ltapasco          #+#    #+#             */
/*   Updated: 2022/07/10 19:45:58 by ltapasco         ###   ########.fr       */
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
				if (li == 1)
					ft_putchar('A');
				else if (li == y)
					ft_putchar('C');
				else
					ft_putchar('B');
			}
			else if (li == 1 || li == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}
