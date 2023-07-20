/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mito <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 14:22:27 by mito              #+#    #+#             */
/*   Updated: 2023/07/15 14:40:20 by mito             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	k;

	k = nb - 1;
	if ((nb == 0) || (nb == 1))
	{
		return (1);
	}
	if (nb >= 2)
	{
		while (k >= 1)
		{
			nb = nb * k;
			k--;
		}
		return (nb);
	}
	return (0);
}
/*
int main() {
    printf("%d\n", ft_iterative_factorial(4));
}*/
