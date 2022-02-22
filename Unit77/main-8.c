//77-8
#include "append-8.h"
#include "print-8.h"

int main()
{
	DATA data = { 0, };

	append(&data, "The ", "Little Prince");
	print(&data);

	return 0;
}