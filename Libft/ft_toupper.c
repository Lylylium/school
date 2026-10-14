/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 23:02:24 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/14 23:28:38 by manguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_toupper(int c)
{
	if (c > 64 && c < 91)
		return (c);
	else if (c > 96 && c < 123)
		return (c - 32);
	return (0);
}

// int	main(void)
// {
// 		printf("%d\n", 'c');
// 		printf("%c\n", ft_toupper('c'));
// 	return (0);
// }