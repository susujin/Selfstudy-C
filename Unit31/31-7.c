#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{	
	int num;
	scanf("%d", &num);

	//�������� �� ���
	for (int i = 0; i < num; i++)
	{
		for (int j = num - 1; j >= 0; j--)
		{
			if (j > i)
				printf(" ");
			else
				printf("*");
		}
		for (int j = 0; j < num; j++)
		{
			if (j < i)
				printf("*");
		}
		printf("\n");
	}

	printf("\n\n\n");
	//�Ƕ�̵� �� �����
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (int j = 2 * num - 1; j > 2 * i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	

	return 0;
}