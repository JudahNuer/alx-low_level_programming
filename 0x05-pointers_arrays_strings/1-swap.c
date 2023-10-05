#include "main.h"

/**
*swap_int - swaps 2 numbers
*
*@a: number to be swapped
*@b: number to be swapped
*/
void swap_int(int *a, int *b)
{
	int cont;

	cont = *a;
	*a = *b;
	*b = cont;
}
