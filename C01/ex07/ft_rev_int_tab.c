/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:50:29 by adhernan          #+#    #+#             */
/*   Updated: 2022/07/18 13:50:45 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	cont;

	cont = 0;
	while (cont < size / 2)
	{
		aux = tab[cont];
		tab[cont] = tab [size - 1 - cont];
		tab[size - 1 - cont] = aux;
		cont++;
	}
}
