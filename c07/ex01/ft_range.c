/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mito <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 11:35:43 by mito              #+#    #+#             */
/*   Updated: 2023/07/19 11:27:23 by mito             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*num;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	num = (int *)malloc(sizeof(num) * (max - min));
	i = 0;
	while (min < max)
	{
		num[i] = min;
		i++;
		min++;
	}
	return (num);
}
/*
int	main(void)
{
	int	*result;
	int min = 3;
	int max = 7;
	result = ft_range(min, max);
	int	j;

    j = 0;
    while (j < (max -min))
    {
		printf("%d\n", result[j]);
		j++;
    }
	return (0);
}*/
