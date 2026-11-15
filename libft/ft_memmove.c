/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 13:39:42 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/21 13:39:53 by manguyen         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}

// int	main(void)
// {
// 	char	s[100] = "boujour tout le monde";
// 	char	s2[50] = "tout le";

// 	ft_memmove(s2, s, 10);
// 	printf("s2 = %s\n", s2);
// 	return (0);
// }

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	int		i;
// 	char	*d;
// 	char	*s;
// 	char	t;

// 	d = (char *)dest;
// 	s = (char *)src;
// 	i = 0;
// 	while (n--)
// 	{
// 		t = s[i];
// 		d[i] = t;
// 		i++;
// 	}
// 	return (dest);
// }
