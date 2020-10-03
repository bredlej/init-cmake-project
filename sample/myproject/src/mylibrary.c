#include <myproject/mylibrary.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void print_version(void)
{
	printf("Myproject (version %0.2f)\n", VERSION);
}

/*
	Function used for initial unit test of this library.
	See ../tests/test_mylibrary.c"
*/
int my_library_function(void)
{
	return 1;
}
