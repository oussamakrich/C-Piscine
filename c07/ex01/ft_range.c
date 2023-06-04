/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:16:14 by okrich            #+#    #+#             */
/*   Updated: 2022/08/11 12:06:36 by okrich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	l;
	int	i;

	i = 0;
	l = max - min;
	p = malloc(sizeof(int) * (l + 1));
	if (p == NULL || l <= 0)
		return (NULL);
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
