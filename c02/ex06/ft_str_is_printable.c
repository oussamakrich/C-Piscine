/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 20:09:53 by okrich            #+#    #+#             */
/*   Updated: 2022/07/30 12:58:06 by okrich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	ref;

	i = 0;
	ref = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32)
		{
			ref = 0;
			break ;
		}
		i++;
	}
	return (ref);
}
