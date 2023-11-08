/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 12:04:19 by myerrou           #+#    #+#             */
/*   Updated: 2023/10/03 11:26:36 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		r;
	int		i;
	int		*b;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	r = max - min;
	b = malloc(r * sizeof(int));
	if (!b)
	{
		*range = 0;
		return (-1);
	}
	*range = b;
	i = 0;
	while (i < r)
	{
		b[i] = min + i;
		i++;
	}
	return (r);
}
/*
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while (i <size)
	{
		printf("%d, ",tab[i]);
		i++;
	}
}
*/
