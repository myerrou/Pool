/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:08:09 by myerrou           #+#    #+#             */
/*   Updated: 2023/09/18 18:15:57 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	last;
	int	temp;

	first = 0;
	last = size - 1;
	while (first < last)
	{
		temp = tab[last];
		tab[last] = tab[first];
		tab[first] = temp;
		first++;
		last--;
	}
}
