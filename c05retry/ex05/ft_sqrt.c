/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mito <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:33:07 by mito              #+#    #+#             */
/*   Updated: 2023/07/14 08:18:54 by mito             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	x;

	x = 1;
	if (nb > 2147395600)
	{
		return (0);
	}
	else
	{
		while (nb > (x * x))
		{
			x++;
		}
		if (nb == x * x)
		{
			return (x);
		}
		else if (nb != x * x)
		{
			return (0);
		}
	}
	return (0);
}
/*
int main() {
    printf("%d\n", ft_sqrt(81));
}*/
