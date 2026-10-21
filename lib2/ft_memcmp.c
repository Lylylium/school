/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:11:14 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/21 17:12:29 by manguyen         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s22;

	i = 0;
	s11 = (unsigned char *) s1;
	s22 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while ((s11[i] == s22[i]) && i < n - 1)
	{
		i++;
	}
	// printf("i = %ld\n", i);
	// printf("%d\n", s11[i]);
	// printf("%d\n", s22[i]);
	if (!s11[i] && !s22[i])
		return (0);
	return (s11[i] - s22[i]);
}

// int	main(void)
// {
// 	// char	s[] = "boujour tout le monde";
// 	// char	s2[] = "bonj";
// 	char s[] = {-128, 0, 127, 0};
// 	char s1[] = {-128, 0, 127, 0};
// 	// char s2[] = {0, 0, 127, 0};
// 	// char s3[] = {0, 0, 42, 0};

// 	printf("cmp = %d\n\n", memcmp(s, s1, 4));
// 	printf("ft_cmp = %d\n", ft_memcmp(s, s1, 4));
// 	return (0);
// }