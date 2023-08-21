#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int buffers[] = {9, 8, 10, 24, 75, 9};
int idx = 0;

/**
* rand - rand function to overwrite
* Return: buffers 
*/

int rand(void)
{
    if (idx < sizeof(buffers) / sizeof(buffers[0]))
    {
	return (buffers[idx++]);
    }
    else
    {
        return (rand());
    }
}
