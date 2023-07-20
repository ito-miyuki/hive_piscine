/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mito <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:07:14 by mito              #+#    #+#             */
/*   Updated: 2023/07/15 14:42:40 by mito             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if ((nb == 0) || (nb == 1))
	{
		return (1);
	}
	else if (nb < 0)
	{
		return (0);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int main()
{
    printf("%d\n", ft_recursive_factorial(4));
}*/
