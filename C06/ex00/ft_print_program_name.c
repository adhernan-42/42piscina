/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:54:27 by adhernan          #+#    #+#             */
/*   Updated: 2022/07/28 14:44:46 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	c;

	c = 0;
	while (argv[0][c] && argc)
	{
		ft_putchar(argv[0][c]);
		c++;
	}
	write (1, "\n", 2);
	return (0);
}
