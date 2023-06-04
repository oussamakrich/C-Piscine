/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 22:04:04 by okrich            #+#    #+#             */
/*   Updated: 2022/07/23 22:24:15 by okrich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_collums(int clmn, char sf, char mid)
	{
	int	counter;

		counter = 1;
	while (counter <= clmn)
	{
		if (counter == 1 || counter == clmn)
			ft_putchar(sf);
		else
			ft_putchar(mid);
		counter++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	counter0;

	counter0 = 1;
	if (x >= 1 && y >= 1)
	{
		while (counter0 <= y)
		{
			if (counter0 == 1 || counter0 == y)
				ft_collums(x, 'o', '-');
			else
				ft_collums(x, '|', ' ');
			counter0++;
		}
	}
}
