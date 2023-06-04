/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 10:57:39 by okrich            #+#    #+#             */
/*   Updated: 2022/08/11 12:01:39 by okrich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_size(int size, char **strs, char *sep)
{
	int	l;
	int	i;

	l = 1;
	i = 0;
	while (i < size)
		l = l + (ft_strlen(strs[i++]) + ft_strlen(sep)) * (size - 1);
	return (l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		a;
	char	*tab;

	i = 0;
	j = 0;
	a = 0;
	tab = malloc(sizeof(char) * ft_size(size, strs, sep) + 1);
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			tab[a++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			tab[a++] = sep[j++];
		i++;
	}
	tab[a] = '\0';
	return (tab);
}
