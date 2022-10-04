/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:36:22 by adhernan          #+#    #+#             */
/*   Updated: 2022/07/28 12:36:57 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int				c;
	unsigned int	n;
	int				sign;

	sign = 1;
	n = 0;
	cont = 0;
	while (str[c] == ' ' || str[c] == '\n' || str[c] == '\r' || str[c] == '\t'
		str[c] == '\v')
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			sign = sign * (-1);
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		n = n * 10 + (str[c] - '0');
		c++;
	}
	return ((int)(sign * n));
}
