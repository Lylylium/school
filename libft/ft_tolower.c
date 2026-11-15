/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 12:12:45 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/28 14:13:28 by manguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		return (c + 32);
	return (c);
}

// int	main(void)
// {
// 	printf("%c\n", 'M');
// 	printf("%c\n", ft_tolower('M'));
// 	return (0);
// }