/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 18:26:35 by myerrou           #+#    #+#             */
/*   Updated: 2023/10/03 11:27:30 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
//#include <stdio.h>
int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	j;
	int	i;

	j = 0;
	i = ft_strlen(dest);
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	final_len(char **strs, int size, char *sep)
{
	int	fl;
	int	i;
	int	fs;

	fl = 0;
	i = 0;
	while (i < size)
	{
		fl += ft_strlen(strs[i]);
		i++;
	}
	fs = ft_strlen(sep);
	fl += fs * (size - 1);
	return (fl);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*a;
	int		fl;
	int		i;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	fl = final_len(strs, size, sep);
	a = (char *)malloc((fl + 1) * (sizeof(char)));
	if (!a)
		return (0);
	a[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(a, strs[i]);
		if (i < size - 1)
		{
			ft_strcat(a, sep);
		}
		i++;
	}
	return (a);
}
/*
int	main(void)
{
	int	size;

	size = 5;
	char *strs[5] = {"Go" ,"Mohamed", "You", "are", "Awsome"};
	char *sep = "_";
	char *res = ft_strjoin(size, strs, sep);
	printf("%s$\n", res);
	free(res);
}
*/
