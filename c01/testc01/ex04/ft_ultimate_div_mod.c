/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mito <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 11:43:10 by mito              #+#    #+#             */
/*   Updated: 2023/07/03 12:43:27 by mito             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a % *b;
	*a = *a / *b;
	*b = temp;
}
