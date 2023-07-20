/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mito <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:26:10 by mito              #+#    #+#             */
/*   Updated: 2023/07/13 18:36:57 by mito             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index >= 0 && index < 2)
	{
		return (index);
	}
	else if (index < 0)
	{
		return (-1);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*int main()
{
    printf("%d\n", ft_fibonacci(5));
}*/
