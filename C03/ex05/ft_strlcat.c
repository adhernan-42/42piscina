/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 16:07:12 by adhernan          #+#    #+#             */
/*   Updated: 2022/07/26 12:21:48 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	d_c;

	c = 0;
	d_c = 0;
	while (src[c])
		c++;
	while (dest[d_c])
		d_c++;
	if (size <= d_c)
		return (size + c);
	c = 0;
	while (src[c] && d_c + 1 < size)
	{
		dest[d_c] = src[c];
		++c;
		d_c++;
	}
	while (src[c])
		c++;
	dest[d_c] = '\0';
	return (c - 1 + size);
}
