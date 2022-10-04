/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:21:48 by adhernan          #+#    #+#             */
/*   Updated: 2022/07/20 10:59:27 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		cont;
	char	c;
	char	d;

	cont = -1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[++cont])
	{
		c = str[cont];
		d = str[cont -1];
		if (c >= 'A' && c <= 'Z')
			str[cont] += 32;
		if (!(d >= 'A' && d <= 'Z') && !(d >= 'a' && d <= 'z'))
			if (!(d >= '0' && d <= '9' ))
				if ((c >= 'a') && (c <= 'z'))
					str[cont] -= 32;
	}
	return (str);
}
