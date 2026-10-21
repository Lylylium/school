/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 14:07:46 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/21 14:21:54 by manguyen         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;
	unsigned char	*t;
	// unsigned char	d;

	i = 0;
	t = (unsigned char *) s;
	// d = (unsigned char) c;
	while ((t[i] != c) && t[i] && n--)
		i++;
	if (t[i] == c)
		return((unsigned char *)s + i);
	return (NULL);
}

// int	main(void)
// {
// 	const char	s[] = "salut tout le monde";
// 	int 		c = 'o';
// 	size_t		n = 4;
// 	char		*m = ft_memchr(s, c, n);
	
// 	printf("%s", m);
// 	return (0);
// }