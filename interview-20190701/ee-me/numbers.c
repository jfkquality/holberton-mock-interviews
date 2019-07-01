#include <stdio.h>

int main(void)
{
	int n = 0;
	int n2 = 0;

	while (n < 10)
	{
		n2 = 0;
		while (n2 <= 14)
		{
			if (n2 > 9)
				putchar(n2 / 10 + '0');
			putchar(n2 % 10 + '0');
			n2++;
		}
		putchar('\n');
		n++;
	}

	return (0);
}
