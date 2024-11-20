
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	do_op(char *operand_1, char operator, char *operand_2)
{
	int		first;
	int		second;
	int		result;

	result = 0;
	first = atoi(operand_1);
	second = atoi(operand_2);
	if (operator == '+')
		result = first + second;
	else if (operator == '-')
		result = first - second;
	else if (operator == '*')
		result = first * second;
	else if (operator == '/')
		result = first / second;
	else if (operator == '%')
		result = first % second;
	printf("%d", result);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][1] == '\0')
			do_op(argv[1], argv[2][0], argv[3]);
	}
	printf("\n");
	return (0);
}
