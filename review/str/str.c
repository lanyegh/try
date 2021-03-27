#include "str.h"


int  memoryOverflow()
{
	char str[11];
	char *str1 = "0123456789";
	printf("%s%s=%d\n", "strlen", "\(\"0123456789\"\)",strlen(str1));
	return strcpy(str, str1);
}
