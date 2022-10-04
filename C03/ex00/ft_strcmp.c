/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 09:32:04 by adhernan          #+#    #+#             */
/*   Updated: 2022/07/25 17:58:23 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	cont;
	int	aux;

	cont = 0;
	while (s1[cont] || s2[cont])
	{
		aux = s1[cont] - s2[cont];
		if (s1[cont] != s2[cont])
			return (aux);
		cont++;
	}
	return (0);
}
