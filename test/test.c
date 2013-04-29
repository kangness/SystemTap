#include <stdlib.h>
#include <string.h>

void fun()
{
	char   *ptr;
	ptr = (char *) malloc (1024);
	memset(ptr,0,1024);
}

int main()
{
	fun();
	return 0;
}
