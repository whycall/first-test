#include <stdio.h>
#include "../include/fun.h"

int main()
{
	callfoo();
	printf("bug123 fix\n");
	callfoo();
	printf("bug123 fix2\n");
	printf("bug123 fix3\n");
	return 0;
}
