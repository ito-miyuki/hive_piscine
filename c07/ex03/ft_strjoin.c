/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mito <mito@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:36:10 by mito              #+#    #+#             */
/*   Updated: 2023/07/19 13:37:38 by mito             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	final_length(char **strs, int size, int size_sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		len = len + size_sep;
		i++;
	}
	len = len - size_sep;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_len;
	int		i;
	char	*string;
	char	*dest;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_len = final_length(strs, size, ft_strlen(sep));
	string = (char *)
		malloc((full_len + 1) * sizeof(char));
	dest = string;
	if (!dest)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(dest, strs[i]);
		dest = dest + ft_strlen(strs[i]);
		if (i < size - 1)
			ft_strcpy(dest, sep);
			dest = dest + ft_strlen(sep);
		i++;
	}
	*dest = '\0';
	return (string);
}
/*
int	main(void)
{
	char	**strs;
	char	*sep;
	char	*result;
	int	size = 3;
	
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 2 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 9 + 1);
	strs[0] = "Today";
	strs[1] = "is";
	strs[2] = "Tuesday";
	sep = "|";
	result = ft_strjoin(size, strs, sep);
	printf("%s\n", result);
}*/
