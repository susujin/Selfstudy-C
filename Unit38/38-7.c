#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int rowcol;
	scanf("%d", &rowcol);
	int** m = malloc(sizeof(int*) * rowcol);

	for (int i = 0; i < rowcol; i++)
	{
		m[i] = malloc(sizeof(int) * rowcol);
		memset(m[i], 0, sizeof(int) * rowcol); //�ʱ�ȭ
	}

	for (int i = 0; i < rowcol; i++)
	{
		m[i][i] = 1; //�밢�� 1 �Ҵ�
	}

	for (int i = 0; i < rowcol; i++)
	{
		for (int j = 0; j < rowcol; j++)
		{
			printf("%d ", m[i][j]); //������ ���
		}
		printf("\n");
	}

	for (int i = 0; i < rowcol; i++)
	{
		free(m[i]);
	}
	free(m);

	return 0;
}