/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:30:49 by myerrou           #+#    #+#             */
/*   Updated: 2023/09/18 18:20:41 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	sort;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			j = i + 1;
			if (tab[i] > tab[j])
			{
				sort = tab[i];
				tab[i] = tab[j];
				tab[j] = sort;
			}
			i++;
		}
		size--;
	}
}
