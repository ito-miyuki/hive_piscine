/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mito <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 08:58:05 by mito              #+#    #+#             */
/*   Updated: 2023/07/14 08:47:23 by mito             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
	{
		while (power > 0)
		{
			result = result * nb;
			power--;
		}
		return (result);
	}
	return (0);
}
/*int main()
{
    printf("%d\n", ft_iterative_power(13, 8));
}*/
