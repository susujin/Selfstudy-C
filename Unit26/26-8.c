#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char menu;

	scanf("%c", &menu);

	switch (menu)
	{
	case 'f':
		printf("ȯŸ");
		break;
	case 'c':
		printf("�ݶ�");
		break;
	case 'p':
		printf("��ī������Ʈ");
		break;
	default:
		printf("�Ǹ����� �ʴ� �޴�");
		break;
	}
	return 0;
}