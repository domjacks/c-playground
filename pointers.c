#include <stdio.h>

int main(void)
{

    int i;
    int *p; // Pointer

    p = &i; // Assign address of i to p

    i = 10;  // i is now 10
    *p = 20; // the thing p points to (i) is now 20

    printf("i is %d\n", i);   // prints "20"
    printf("i is %d\n", *p);  // "20"! dereference-p is the same as i!
}

