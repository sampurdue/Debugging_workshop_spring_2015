#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	
	int *p = malloc(10*sizeof(int));
	printf("This program has no errors. Hurrah !\n");
	free(p);
	return 0;
}

