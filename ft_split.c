#include "libft.h"
#include <stdlib.h>

size_t size_of_words(char const *s, char c)
{
	size_t delimiters;

	delimiters = 1;
	while (*s)
	{
		if (*s == c)
		{
			delimiters++;
		}
		s++;
	}
	return delimiters;
}

void ft_free_split(char **words)
{
	// Function to free memory allocated by ft_split
	if (words != NULL)
	{
		size_t i = 0;
		while (words[i] != NULL)
		{
			free(words[i]);
			i++;
		}
		free(words);
	}
}

char **ft_split(char const *s, char c)
{
	size_t i;
	size_t l;
	size_t del;
	size_t size_of_splited_words;
	size_t size_of_a_word;
	char **words = NULL;

	if (s == NULL)
	{
		return NULL;
	}

	l = 0;
	size_of_splited_words = size_of_words(s, c) + 1;
	words = ft_calloc(size_of_splited_words, sizeof(char *));
	if (words == NULL)
	{
		ft_free_split(words);
		return NULL;
	}
	i = 0;
	del = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			size_of_a_word = i - del;
			*(words + l) = ft_calloc(size_of_a_word + 1, sizeof(char));

			if (*(words + l) == NULL)
			{
				ft_free_split(words);
				return NULL;
			}

			ft_strncpy(*(words + l), s + del, size_of_a_word);
			del = i + 1;
			l++;
		}
		i++;
	}
	if (del != i)
	{
		size_of_a_word = i - del;
		*(words + l) = ft_calloc(size_of_a_word + 1, sizeof(char));

		if (*(words + l) == NULL)
		{
			ft_free_split(words);
			return NULL;
		}

		ft_strncpy(*(words + l), s + del, size_of_a_word);
		l++;
	}

	*(words + l) = NULL;

	return words;
}
