/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adhernan <adhernan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:53:46 by adhernan          #+#    #+#             */
/*   Updated: 2022/07/22 16:01:32 by adhernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	len;
	int	cont1;
	int	cont2;

	len = 0;
	while (to_find[len])
		len++;
	if (len == 0)
		return (str);
	cont1 = 0;
	cont2 = 0;
	while (str[cont1])
	{
		while (str[cont1 + cont2] == to_find[cont2])
		{
			if (cont2 + 1 == len)
				return (str + cont1);
			cont2++;
		}
		cont2 = 0;
		cont1++;
	}
	return (0);
}
