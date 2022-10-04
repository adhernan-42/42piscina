/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:13:09 by adhernan          #+#    #+#             */
/*   Updated: 2022/07/20 16:26:56 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(int c)
{
	write (1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		cont;
	char	*hex;

	hex = "0123456789abcdef";
	cont = -1;
	while (str[++cont] != '\0')
	{
		if (str[cont] < 32 || str[cont] > 126)
		{
			ft_putchar('\\');
			ft_putchar(hex[str[cont] / 16]);
			ft_putchar(hex[str[cont] % 16]);
		}
		else
		{
			ft_putchar(str[cont]);
		}
	}
}
