/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mito <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:44:20 by mito              #+#    #+#             */
/*   Updated: 2023/07/09 09:15:55 by mito             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
/*
int main() {
    char *s1 = "Hello";
    char *s2 = "Hello";
    char *s3 = "HelloWofdsaf";
	char *s4 = "Hea";
    
    printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s1, s4));
    printf("%d\n", ft_strcmp(s1, s3));
	return 0;
}*/
