/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:53:39 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/22 14:53:39 by manguyen         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	main(int argc, char** argv)
// {
// 	if (argc < 10)
// 		printf("%d", ft_strlen(argv[1]));
// 	return (0);
// }

int	main(void)
{
	// printf("%d", ft_strlen("salut"));
	// char	t[100] = "boujour tout le monde";
	// char	t2[50] = "salut la famille";
	char	s[100] = "boujour tout le monde";
	char	s2[50] = "tout le";

	// printf("t0 = %s\n", t2);
	// strlcpy(t2, t, 6*sizeof(char));
	// printf("t = %s\n\n", t2);

	// printf("s0 = %s\n", s2);
	ft_memmove(s2, s, 10);
	printf("s2 = %s\n", s2);
	return (0);
}
