/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:35:53 by myerrou           #+#    #+#             */
/*   Updated: 2023/09/30 22:15:02 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	index;

	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	index = 2;
	if (nb >= 2 && nb <= 100000000)
	{
		while (index <= nb)
		{
			if (index * index == nb)
				return (index);
			index++;
		}
	}
	while (index <= nb / 40000)
	{
		if (index * index == nb)
			return (index);
		index++;
	}
	return (0);
}
