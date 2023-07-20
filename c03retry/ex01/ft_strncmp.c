/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mito <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 09:18:49 by mito              #+#    #+#             */
/*   Updated: 2023/07/09 09:14:55 by mito             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' && i < n) || (s2[i] != '\0' && i < n))
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
    char *s2 = "Hellory";
	char *s3 = "Hai";
    printf("%d\n", ft_strncmp(s1, s2, 6));
	printf("%d\n", ft_strncmp(s1, s3, 3));

    return 0;
}*/
