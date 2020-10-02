#include <myproject/mylibrary.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void print_version(void)
{
	printf("Myproject (version %0.2f)\n", VERSION);
}

int my_library_function()
{
	return 1;
}
