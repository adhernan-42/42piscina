/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltapasco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 19:04:30 by ltapasco          #+#    #+#             */
/*   Updated: 2022/07/10 19:48:52 by ltapasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define SALTO '\n'
#define BLANK ' '

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
					ft_putchar('A');
				else if ((col == 1 && li == y) || (col == x && li == 1))
					ft_putchar('C');
				else if (col == x && li == y)
					ft_putchar('B');
			}
			else if (col == 1 || col == x || li == 1 || li == y)
				ft_putchar('B');
			else
				ft_putchar(BLANK);
		}
		ft_putchar(SALTO);
	}
}
