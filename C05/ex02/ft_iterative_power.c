/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 08:41:46 by myerrou           #+#    #+#             */
/*   Updated: 2023/10/03 09:50:39 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	bomb;

	bomb = nb;
	while (power > 1)
	{
		bomb *= nb;
		power--;
	}
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (bomb);
}

int main()
{
	printf("%d",ft_iterative_power(8, 2));
}
