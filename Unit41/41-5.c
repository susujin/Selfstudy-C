#include <stdio.h>
#include <string.h>

int main()
{
	char* s1 = "Pachelbel Canon";
	char* s2 = "Pachelbel Canon";

	//문자열 비교
	//s2가 크면 -1, 같으면 0, s1이 크면 1
	int ret = strcmp(s1, s2); 
	
	printf("%d\n", ret);
	return 0;
}