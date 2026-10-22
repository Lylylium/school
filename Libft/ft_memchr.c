/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:54:50 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/22 14:56:18 by manguyen         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*t;
	char			w = (2 + 256);

	i = 0;
	t = (unsigned char *) s;
	printf("%c\n", w);
	while ((t[i] != c) && n--)
		i++;
	if (t[i] == c && t[i] == 0)
		return (0);
	if (t[i] == c)
	{
		// printf("%s\n", (unsigned char *)s + i);
		return ((unsigned char *) s + i);
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	s[] = "salut tout le monde";
// 	// const char 		s[] = {0, 1, 2, 3, 4, 5};
// 	int			c = 1;
// 	size_t		n = 6;
// 	char		*m = ft_memchr(s, c, n);

// 	printf("%s", m);
// 	return (0);
// }