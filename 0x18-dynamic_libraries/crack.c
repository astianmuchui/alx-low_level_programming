#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* rand - rand function to overwrite
* Return: buffers 
*/

int rand(void)
{
	int buffers[] = {9, 8, 10, 24, 75, 9};
	int idx = 0;
	/* Return each member of the array by order of function call */
	return (buffers[idx++]);
}
