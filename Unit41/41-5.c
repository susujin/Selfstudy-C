#include <stdio.h>
#include <string.h>

int main()
{
	char* s1 = "Pachelbel Canon";
	char* s2 = "Pachelbel Canon";

	//���ڿ� ��
	//s2�� ũ�� -1, ������ 0, s1�� ũ�� 1
	int ret = strcmp(s1, s2); 
	
	printf("%d\n", ret);
	return 0;
}