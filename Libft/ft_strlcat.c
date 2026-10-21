/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 12:09:33 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/21 12:09:37 by manguyen         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	int				i;
	int				j;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	j = 0;
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	while (d[i])
		i++;
	while (n--)
		d[i++] = s[j++];
	dest[i] = '\0';
	return (ft_strlen(dest));
}

// int	main(void)
// {
// 	const char	*src = "bonjour tout le monde";
// 	char	dest[] = "salut la famille aslifjoijflamsfd";
// 	size_t	size;

// 	size = ft_strlcat(dest, src, 6);
// 	printf("size = %ld", size);
// 	return (0);
// }