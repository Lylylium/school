#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i++])
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			count++;
		}
	}
	if (s[ft_strlen((char *)s) - 1] != c)
		count++;
	printf("count = %d\n", count);
	return (count);
}

static int	ft_count_letter(char *s, char c)
{
	int		i;

	i = 0;
		while ((s[i] != c) && s[i])
			i++;
	return (i + 1);
}

// static void ft_mal(char const *s, char c)
// {
// 	int		i;
// 	int		count;
// 	char	**mal;
// 	char	*ma;

// 	count = ft_count_word(char const *s, char c);
// 	mal = malloc((count + 1) * sizeof(char *));

// 	i = 0;
// 	while (mal[i])
// 	{

// 	}

// 	letter = 0;
// 		while (s[i] != c)
// 		{
// 			letter++;
// 			i++;
// 		}
// 		count[l] = letter;
// 		l++;
// 		i++;
// }

char	**ft_split(char const *s, char c)
{
	int		i;
	int		t;
	int		tt;
	char	*str;
	char	**split;
	int		words;

	words = ft_count_word(s, c);
	str = (char *) s;
	split = malloc((words + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	t = 0;
	if (*str == c)
		str++;
	while (words--)
	{
		i = 0;
		if (str[i] == c)
		{
			while (str[i] == c)
				i++;
		}
		tt = 0;
		split[t] = malloc(ft_count_letter(str, c) * sizeof(char));
		if (!split[t])
			return (NULL);
		while (str[i] != c)
		{
			split[t][tt] = str[i];
			i++;
			tt++;
		}
		t++;
		str = str + i + 1;
		
	}
	return (split);
}

int	main(void)
{
	const char	*s = "  bonjour  tout      le monde     ";
	char 		c = ' ';
	int			i = 0;
	char		**split = ft_split(s, c);

	while (split[i])
	{
		printf("split = %s\n", split[i]);
		free(split[i]);
		i++;
	}
	free(split);
	return (0);
}