#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int kor, eng, mat, sci;
	scanf("%d %d %d %d", &kor, &eng, &mat, &sci);


	if (kor >= 0 && kor <= 100 && eng >= 0 && eng <= 100 && mat >= 0 && mat <= 100 && sci >= 0 && sci <= 100)
	{
		if ((kor + eng + mat + sci) / 4 >= 85)
		{
			printf("�հ�\n");
		}
		else
		{
			printf("���հ�\n");
		}
	}
	else
	{
		printf("�߸��� ����");
	}

	return 0;
}