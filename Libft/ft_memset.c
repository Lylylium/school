/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 14:03:08 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/21 14:04:54 by manguyen         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int		i;
	unsigned char	*t;
	
	t = (unsigned char *)s;
	i = 0;
	while (n--)
	{
		t[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char	s[50] = "salut";

// 	ft_memset(s + 1, '?', 2);
// 	printf("%s\n", s);
// 	return (0);
// }