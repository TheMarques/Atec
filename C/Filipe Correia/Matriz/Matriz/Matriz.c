// Matriz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdlib.h>
#include <stdio.h>

int main()
{
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

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
