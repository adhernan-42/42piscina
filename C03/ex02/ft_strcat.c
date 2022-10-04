/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 15:48:47 by adhernan          #+#    #+#             */
/*   Updated: 2022/07/21 19:02:46 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	cont1;
	int	cont2;

	cont1 = 0;
	cont2 = 0;
	while (dest[cont1])
		cont1++;
	while (src[cont2])
	{
		dest[cont1] = src[cont2];
		cont1++;
		cont2++;
	}
	dest[cont1] = '\0';
	return (dest);
}
