/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 09:53:44 by adhernan          #+#    #+#             */
/*   Updated: 2022/07/20 16:19:34 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_str_is_printable(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (!(str[cont] >= 32 && str[cont] <= 126))
			cont++;
		else
			return (0);
	}
	return (1);
}
