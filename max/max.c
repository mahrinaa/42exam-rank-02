#include <stddef.h>

int	max(int *tab, unsigned int len)
{
	static int	max;

	if (len <= 0 || tab == 0)
		return (0);
	len--;
	max = tab[len];
	while (len--)
		if (tab[len] > max)
			max = tab[len];
	return (max);
}
