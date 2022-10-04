/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:07:39 by adhernan          #+#    #+#             */
/*   Updated: 2022/07/21 09:07:38 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cont;
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	cont = 0;
	while (src[cont] != '\0' && cont < (size - 1))
	{
		dest[cont] = src[cont];
		cont++;
	}
	dest[cont] = '\0';
	return (i);
}
