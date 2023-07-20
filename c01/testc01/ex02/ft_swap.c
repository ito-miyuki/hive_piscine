/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mito <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 10:21:56 by mito              #+#    #+#             */
/*   Updated: 2023/07/03 12:31:38 by mito             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int x;
	int y;
	x = 1;
	y = 2;

	printf("%d\n", x);
	printf("%d\n", y);

	ft_swap(&x, &y);
	printf("%d\n", x);
	printf("%d\n", y);
	return(0);
}
