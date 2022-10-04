/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 11:24:27 by adhernan          #+#    #+#             */
/*   Updated: 2022/07/22 12:11:02 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				cont1;
	unsigned int	cont2;

	cont1 = 0;
	cont2 = 0;
	while (dest[cont1])
		cont1++;
	while (src[cont2] && cont2 < nb)
	{
		dest[cont1] = src[cont2];
		cont1++;
		cont2++;
	}
	dest[cont1] = '\0';
	return (dest);
}
