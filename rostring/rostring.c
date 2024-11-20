#include <unistd.h>

void	write_word(char *start, char *end)
{
	while (start < end)
	{
		write(1, start, 1);
		start++;
	}
}

int main(int ac, char **av)
{
	int i;
	char *str;
	char *first_word_start;
	char *first_word_end;

	if (ac > 1)
	{
		i = 0;
		str = av[1];
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		first_word_start = &str[i];
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
		first_word_end = &str[i];
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (str[i])
		{
			while (str[i])
			{
				if (str[i] == ' ' || str[i] == '\t')
				{
					while (str[i] == ' ' || str[i] == '\t')
						i++;
					if (str[i])
						write (1, " ", 1);
				}
				else
				{
					write (1, &str[i], 1);
					i++;
				}
			}
			write (1, " ", 1);
		}
		write_word(first_word_start, first_word_end);
	}
	write(1, "\n", 1);
	return (0);
}
