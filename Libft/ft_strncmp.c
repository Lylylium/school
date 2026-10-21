/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 12:36:54 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/21 12:49:14 by manguyen         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] && n--)
		i++;
	return (s1[i] - s2[i]);
}

// int	main(int argc,char **argv)
// {
// 	if (argc == 4)
// 		printf("%d", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
// 	return (0);
// }