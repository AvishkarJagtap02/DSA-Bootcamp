#include <stdio.h>
#define access 1

void main() {

	#if access
	printf("Access Per .. \n");
	#else
	printf("Not-Access\n");
	#endif

	printf("EOF\n");
}
