/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:41:32 by adhernan          #+#    #+#             */
/*   Updated: 2022/07/13 17:36:26 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	part1;
	int	part2;

	part1 = -1;
	while (part1++ <= 98)
	{
		part2 = part1;
		while (part2++ < 99)
		{
			ft_putchar ((part1 / 10) + '0');
			ft_putchar ((part1 % 10) + '0');
			ft_putchar(' ');
			ft_putchar((part2 / 10) + '0');
			ft_putchar((part2 % 10) + '0');
			if (part1 < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
