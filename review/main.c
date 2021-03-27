#include <stdio.h>
#include "str.h"
int main()
{
	int rc = 0;
	printf("hello work!\n");
	rc = memoryOverflow();
	if (rc < 0)
	{
		return rc;
	}
	system("pause");
	return 0;
}