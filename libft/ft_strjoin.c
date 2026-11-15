
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	// int		i2;
	int		j;
	int		l1;
	int		l2;
	char	*join;

	i = 0;
	// i2 = 0;
	j = 0;
	l1 = ft_strlen((char *) s1);
	l2 = ft_strlen((char *) s2);

	join = malloc((l1 + l2 + 1) * sizeof(char));
	if (!join)
		return (NULL);
	while (s1[i])
		join[j++] = s1[i++];
	i = 0;
	while (s2[i])
		join[j++] = s2[i++];
	join[j] = '\0';
	return (join);
}

// int	main(int argc, char **argv)
// {
// 	if (argc == 3)
// 		printf("join = %s\n", ft_strjoin(argv[1], argv[2]));
// 	return (0);
// }