/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 18:10:23 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/14 18:10:23 by manguyen         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	int	i;
	size_t l;

	i = 0;	
	while (n--)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	l = ft_strlen(dest)*sizeof(char);
	return (l);
}

// int	main(void)
// {
// 	const char	*src = "boujour tout le monde";
// 	char	dest[] = "salut la famille";
// 	size_t	size;

// 	size = ft_strlcpy(dest, src, 10*sizeof(char));
// 	printf("size = %ld", size);
// 	return (0);
// }