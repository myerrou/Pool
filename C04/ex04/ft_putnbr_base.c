/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 20:24:37 by myerrou           #+#    #+#             */
/*   Updated: 2023/10/05 09:34:17 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int l, int bv, char *sy)
{
	if (l == -2147483648)
	{
		l = -l;
		ft_putchar('-');
		ft_putnbr(((l - 1) / bv) + 1, bv, sy);
	}
	if (l < 0 && l > -2147483648)
	{
		l = -l;
		ft_putchar('-');
	}
	if (l >= bv)
		ft_putnbr(l / bv, bv, sy);
	ft_putchar(sy[l % bv]);
}

int	ft_two(char *sy)
{
	int	i;
	int	j;

	i = 0;
	while (sy[i])
	{
		j = i + 1;
		while (sy[j])
		{
			if (sy[i] == sy[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	bv;

	bv = 0;
	while (base[bv])
	{
		if (base[bv] == 127 || base[bv] <= 32)
			return ;
		if (base[bv] == '+' || base[bv] == '-')
			return ;
		bv++;
	}
	if (bv < 2)
		return ;
	if (ft_two(base))
		return ;
	ft_putnbr(nbr, bv, base);
}

/*int	main()
{
	ft_putnbr_base(-2147483648, "01");
}
*/
