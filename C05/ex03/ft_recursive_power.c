/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 08:51:18 by myerrou           #+#    #+#             */
/*   Updated: 2023/09/26 09:13:41 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	bomb;

	bomb = nb;
	if (power > 1)
		bomb = nb * ft_recursive_power(nb, power - 1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (bomb);
}
