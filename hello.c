#include "apue.h"

int
main(void)
{
	printf("hello world", (long)getpid());
	exit(0);
}
