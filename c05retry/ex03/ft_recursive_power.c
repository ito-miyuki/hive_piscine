/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mito <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:01:54 by mito              #+#    #+#             */
/*   Updated: 2023/07/16 10:18:31 by mito             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else if (power > 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (result);
}
/*
int main()
{
	printf("%d\n", ft_recursive_power(1, 1));
}*/
