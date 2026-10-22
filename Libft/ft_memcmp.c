/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:33:12 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/22 10:33:12 by manguyen         ###   ########.ch       */
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
	if (!s11[i] && !s22[i])
		return (0);
	return (s11[i] - s22[i]);
}

// int	main(void)
// {
// 	char s[] = {-128, 0, 127, 0};
// 	char s1[] = {-128, 0, 127, 0};

// 	printf("cmp = %d\n\n", memcmp(s, s1, 4));
// 	printf("ft_cmp = %d\n", ft_memcmp(s, s1, 4));
// 	return (0);
// }