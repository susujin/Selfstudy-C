#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int m, n;
	int counter = 0;

	scanf("%d %d", &m, &n);

	char** matrix = malloc(sizeof(char*) * m);

	for (int i = 0; i < m; i++)
	{
		matrix[i] = malloc(sizeof(char) * (n + 1));
		memset(matrix[i], 0, sizeof(char) * (n + 1));
	}

	for (int i = 0; i < m; i++)
	{
		scanf("%s", matrix[i]);
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (matrix[i][j] == '*')
			{
				printf("%c", matrix[i][j]);
				continue;
			}
			else
			{
				for (int k = i - 1; k <= i + 1; k++)
				{
					for (int l = j - 1; l <= j + 1; l++)
					{
						if (k < 0 || l < 0 || k >= m || l >= n)
							continue;
						else if (matrix[k][l] == '*')
							counter += 1;
					}
				}
				matrix[i][j] = counter;
				printf("%d", matrix[i][j]);
				counter = 0;
			}
		}
		printf("\n");
	}

	for (int i = 0; i < m; i++)
	{
		free(matrix[i]);
	}
	free(matrix);
	return 0;
}