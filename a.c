#include <stdio.h>

int main ()
{
	char str1[20];
	printf("What's your name?\n");
	fgets(str1, 20, stdin);
	printf("Hello, %s", str1);
		return 0;
}
