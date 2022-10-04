/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:48:52 by adhernan          #+#    #+#             */
/*   Updated: 2022/07/18 13:47:31 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	cont;

	cont = 0;
	while (cont < size - 1)
	{
		if (tab[cont] > tab[cont + 1])
		{
			aux = tab[cont];
			tab[cont] = tab[cont + 1];
			tab[cont + 1] = aux;
			cont = -1;
		}
	cont++;
	}
}
