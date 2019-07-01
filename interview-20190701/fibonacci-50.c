#include <stdio.h>

int main(void)
{
	int i = 3;
	long int prev;
	long int curr;
	long int next;

	printf("%d, %d, ", 1, 2);

	prev = 1;
	curr = 2;

	while(i < 50)
	{
		next = curr + prev;
		printf("%lu, ", next);

		prev = curr;
		curr = next;

		i++;
	}
	printf("%lu\n", curr + prev);

	return (0);
}
