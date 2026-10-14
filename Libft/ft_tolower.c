/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 23:26:23 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/14 23:28:17 by manguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
		return (c + 32);
	else if (c > 96 && c < 123)
		return (c);
	return (0);
}


// int	main(void)
// {
// 	printf("%c\n", 'M');
// 	printf("%c\n", ft_tolower('M'));
// 	return (0);
// }