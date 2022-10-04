/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:12:39 by adhernan          #+#    #+#             */
/*   Updated: 2022/07/19 12:44:45 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	cont;

	cont = -1;
	while (str[++cont] != '\0')
	{
		if (str[cont] >= 'a' && str[cont] <= 'z')
			str[cont] = str[cont] - 32;
	}
	return (str);
}
