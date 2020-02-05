#include <stdlib.h>
#include <stdio.h>

int main()
{
	printf("Hello World!");
	char matrix[50][50];
	int inputs[50];
	int n, x , y, i;
	printf("Quantity");
	scanf("%d", &n);

	for (x = 0; x < n; x++)
	{
		scanf("%d", &inputs[x]);
	}
	i = inputs[0];
	for (x = 1; x < n; x++)
	{
		if (i < inputs[x]) {
			i = inputs[x];
			inputs[x] = inputs[x - 1];
			inputs[x - 1] = i;
		}
	}
	for (x = 0; x < n; x++)
	{
		printf("%d", inputs[i]);
	}
	return 0;
}