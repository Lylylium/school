/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:38:18 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/14 17:42:48 by manguyen         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int				i;
	// size_t			m;
	unsigned char	*d;
	unsigned char	*s;

	// m = n;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if ()
	{
		while (n--)
			{
				d[i] = s[i];
				i++;
			}
	}
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}

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
