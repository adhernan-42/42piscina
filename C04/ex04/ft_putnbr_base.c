/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 11:12:38 by adhernan          #+#    #+#             */
/*   Updated: 2022/07/27 18:29:26 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (!(base[0]) || !(base[1]))
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr(int nbr, char *base, int sb, int i)
{
	int		nbr_f[15];

	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		nbr = -nbr;
		ft_putchar('-');
	}
	while (base[sb])
		sb++;
	while (nbr > 0)
	{
		nbr_f[i] = nbr % sb;
		nbr = nbr / sb;
		i++;
	}
	while (--i >= 0)
		ft_putchar(base[nbr_f[i]]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	sb;
	int	i;

	i = 0;
	sb = 0;
	if (check_base(base))
		ft_putnbr(nbr, &base[0], sb, i);
}
