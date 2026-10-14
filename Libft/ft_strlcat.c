/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:10:38 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/14 18:14:04 by manguyen         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	int	i;
	int j;
	size_t l;

	i = 0;
	j = ft_strlen(dest)-1;
	printf("%c", dest[j]);
	printf("l0= %d", j);
	while (n--)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	l = ft_strlen(dest)*sizeof(char);
	return (l);
}

int	main(void)
{
	const char	*src = "boujour tout le monde";
	char	dest[] = "salut la famille";
	size_t	size;

	size = ft_strlcat(dest, src, 10*sizeof(char));
	printf("size = %ld", size);
	return (0);
}