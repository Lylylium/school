/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 12:12:29 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/21 12:12:29 by manguyen         ###   ########.ch       */
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