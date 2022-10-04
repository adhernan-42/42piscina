/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:32:54 by adhernan          #+#    #+#             */
/*   Updated: 2022/07/25 17:58:12 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	cont;
	int				aux;

	cont = 0;
	while ((s1[cont] || s2[cont]) && cont < n)
	{
		aux = s1[cont] - s2[cont];
		if (s1[cont] != s2[cont])
			return (aux);
		cont++;
	}
	return (0);
}
