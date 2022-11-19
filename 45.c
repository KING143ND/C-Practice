#include<stdio.h>


int main()
{	
	printf("Pointer Basics\n");
	int a =5;
	int *p=NULL;


	printf("%d\n", p);

	return 0;
}

// Null Pointer :
// * A pointer that is not assigned any value but NULL is known as NULL pointer.
// * In computer programming NULL pointer is a pointer that does not point to any object, variable or function.
// * We can use it to initialize a pointer variable when that pointer variable isn’t assigned any valid memory address yet.
// * int *ptr = NULL;