#ifndef _SEARCH_ALGOS_
#define _SEARCH_ALGOS_

#include <stdlib.h>
#include <stdio.h>

/*Mandatory tasks*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, int left, int right);

/* advanced  tasks*/
int jump_search(int *array, size_t size, int value);

#endif /* _SEARCH_ALGOS_ */
