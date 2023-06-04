/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 18:31:47 by okrich            #+#    #+#             */
/*   Updated: 2022/08/02 19:39:01 by okrich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	facto;

	facto = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		facto = facto * nb;
		nb--;
	}
	return (facto);
}
