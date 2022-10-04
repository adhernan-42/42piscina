/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:49:03 by adhernan          #+#    #+#             */
/*   Updated: 2022/07/19 13:00:31 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	cont;

	cont = -1;
	while (str[++cont] != '\0')
	{
		if (str[cont] >= 'A' && str[cont] <= 'Z')
			str[cont] = str[cont] + 32;
	}
	return (str);
}
