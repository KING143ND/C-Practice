#include <stdio.h>

int main()
{
    printf("Lets learn about pointers\n");
    int a=76;
    int *ptra = &a;
    int *ptr2 = NULL;
    printf("The address of pointer to a is %p\n", &ptra);
    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", ptra);
    printf("The address of some garbage is %p\n", ptr2);
    printf("The value of a is %d\n", *ptra);
    printf("The value of a is %d\n", a);
    return 0;
}

// Uses of Pointers:
// * Dynamic Memory Allocation

// * Arrays, Functions and Structures

// * Return multiple values from a function

// * Pointer reduces the code and improves the performance

 

// That’s all about basics of Pointers. In next tutorial we will discuss about Pointers Arithmetic i.e. how to manipulate pointers values.