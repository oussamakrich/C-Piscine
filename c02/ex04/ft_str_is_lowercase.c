/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okrich <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:58:12 by okrich            #+#    #+#             */
/*   Updated: 2022/07/26 19:12:15 by okrich           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	ref;

	i = 0;
	ref = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			ref = 0;
			break ;
		}
		i++;
	}
	return (ref);
}
