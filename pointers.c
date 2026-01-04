#include <stdio.h>

void increment(int *n) {
    *n = *n + 1;
}

int main(void)
{
    int i;
    int *p; // Pointer
    int *np = NULL;

    printf("Assigning p to address of i\n");
    p = &i; // Assign address of i to p

    printf("Assigning i to 10\n");
    i = 10;  // i is now 10

    printf("Dereferencing p and assigning it to 20\n");
    *p = 20; // the thing p points to (i) is now 20

    printf("i is %d\n", i);   // prints "20"
    printf("*p is %d\n", *p);  // "20"! dereference-p is the same as i!

    printf("np is %p\n", np); 
 
    printf("Incrementing pointer p by 1\n");
    increment(p);

    printf("i is %d\n", i);  // "20"! dereference-p is the same as i!


}

