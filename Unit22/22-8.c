#include <stdio.h>
#include <stdbool.h>

int main()
{
	bool b1 = false;
	bool b2 = true;

	if (b1 != true)
		printf("��\n");
	else
		printf("����\n");

	printf("%s\n", b2 == false ? "��" : "����");

	return 0;
}