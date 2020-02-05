#include <stdio.h>

int main()
{
	char src[50];
	char dest[12];

	memset(dest, '\0', sizeof(dest));
	strcpy(src, "Esta é uma frase de teste");
	printf("Antes de strncpy : %s\n", src);
	strncpy(dest, src, 10);

	printf("Depois de strncpy: %s\n", dest);


	printf("Enter a string : ");
	gets(src);

	printf("You entered: %s.", src);

	return (0);
}