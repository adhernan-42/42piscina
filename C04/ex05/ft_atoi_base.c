/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:08:52 by adhernan          #+#    #+#             */
/*   Updated: 2022/07/27 18:01:47 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_atoi(char *str)
{
	int				cont;
	unsigned int	n;
	int				sign;

	sign = 1;
	n = 0;
	cont = 0;
	while (str[cont] == ' ')
		cont++;
	while (str[cont] == '+' || str[cont] == '-')
	{
		if (str[cont] == '-')
			sign = sign * (-1);
		cont++;
	}
	while (str[cont] >= '0' && str[cont] <= '9')
	{
		n  = n * 10 + (str[cont] - '0');
		cont ++;
	}
	return ((int)(sign * n));
}
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

int	ft_putnbr_base(int nbr, char *base)
{
	int		sb;
	int		nbr_f[15];
	int		i;

	i = 0;
	sb = 0;
	if (check_base(base))
	{
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
			nbr = base[nbr_f[i]];
	}
	return (nbr);
}

int ft_atoi_base(char *str, char *base)
{
	int	num;
	int delv;

	num = ft_atoi(&str[0]);
	delv = ft_putnbr_base(num, &base[0]);
	return (delv);
}
