#include <stdio.h>

int main(void)
{

	char file;
	int l = wc -l file;

	while (l > 0)
	{
		printf("%s\n", file[l]);
		l -= 2;
	}
}
