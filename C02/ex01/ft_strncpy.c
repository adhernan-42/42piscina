/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:32:55 by adhernan          #+#    #+#             */
/*   Updated: 2022/07/19 09:59:19 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	cont;

	cont = 0;
	while (cont < n)
	{
		dest[cont] = src[cont];
		cont++;
	}
	while (src[cont] != '\0')
	{
		dest[cont] = '\0';
		cont++;
	}
	return (dest);
}
