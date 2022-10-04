/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:02:55 by adhernan          #+#    #+#             */
/*   Updated: 2022/07/28 15:08:53 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		ft_putchar(str[c]);
		c++;
	}
}

int	main(int argc, char **argv)
{
	int	c1;

	c1 = 1;
	while (c1 < argc)
	{
		ft_putstr(argv[c1]);
		write(1, "\n", 2);
		c1++;
	}
	return (0);
}
