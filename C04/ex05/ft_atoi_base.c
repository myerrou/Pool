/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 11:31:00 by myerrou           #+#    #+#             */
/*   Updated: 2023/10/05 09:34:44 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_error(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	nb_base(char str, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb] != '\0')
	{
		if (str == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

int	ft_check(char *str, int *ptr_i)
{
	int	c;
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	c = 1;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			c *= -1;
		i++;
	}
	*ptr_i = i;
	return (c);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		neg;
	int		nb1;
	int		nb2;
	int		bglen;

	nb1 = 0;
	i = 0;
	bglen = ft_error(base);
	if (bglen >= 2)
	{
		neg = ft_check(str, &i);
		nb2 = nb_base(str[i], base);
		while (nb2 != -1)
		{
			nb1 = (nb1 * bglen) + nb2;
			i++;
			nb2 = nb_base(str[i], base);
		}
		return (nb1 *= neg);
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi_base("	+++++--133742", "0123456789"));
	printf("%d\n", ft_atoi_base("	     ---1010", "01"));
	printf("%d\n", ft_atoi_base(" 	+---80000000", "0123456789abcdef"));
}
*/
