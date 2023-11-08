/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:36:25 by myerrou           #+#    #+#             */
/*   Updated: 2023/10/03 10:27:10 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		range;
	int		i;
	int		*b;

	if (min >= max)
		return (0);
	range = max - min;
	b = malloc(range * sizeof(int));
	if (!b)
		return (0);
	i = 0;
	while (i < range)
	{
		b[i] = min + i;
		i++;
	}
	return (b);
}
/*
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}
*/
